#!/usr/bin/env node
// Node.js static site generator using @shd101wyy/mume (no CLI needed)
// Usage: node sitegen.js
// Requires: npm i --save @shd101wyy/mume
// Optional: npm i --save yaml  (なくても簡易YAMLパーサで動きます)
/*
# 1) 依存
npm i --save @shd101wyy/mume        # 必須
# （任意）YAMLをちゃんと読みたい場合
npm i --save yaml

# 2) 実行（プロジェクトのルートで）
node sitegen.js

*/


const fs = require('fs');
const fsp = fs.promises;
const path = require('path');
const os = require('os');

// ---------- tiny YAML loader (prefers 'yaml' pkg, falls back to minimal parser) ----------
async function loadYaml(file) {
  try {
    const YAML = require('yaml');               // if installed
    return YAML.parse(await fsp.readFile(file, 'utf8')) || {};
  } catch {
    const txt = await fsp.readFile(file, 'utf8');
    const out = {};
    for (const rawLine of txt.split(/\r?\n/)) {
      const line = rawLine.replace(/#.*/, '').trim();
      if (!line) continue;
      const i = line.indexOf(':');
      if (i === -1) continue;
      let k = line.slice(0, i).trim();
      let v = line.slice(i + 1).trim();
      // strip surrounding quotes if any
      k = k.replace(/^["']|["']$/g, '');
      v = v.replace(/^["']|["']$/g, '');
      out[k] = v;
    }
    return out;
  }
}

// ---------- placeholder utils ----------
const placeholderRe = /\{\{\s*(["“”])([^\\“”"]+)\1\s*\}\}/g;
function normalizeKey(k) {
  return k
    .replace(/\\/g, '')
    .replace(/["“”]/g, '')
    .replace(/\s+/g, '')
    .toLowerCase();
}
function replacePlaceholders(md, translations) {
  // normalize YAML keys once
  const table = {};
  for (const [k, v] of Object.entries(translations || {})) {
    table[normalizeKey(String(k))] = String(v);
  }
  return md.replace(placeholderRe, (_, __, key) => {
    const got = table[normalizeKey(key)];
    return got != null ? got : `{{"${key}"}}`;
  });
}
function stripMarkersForEnglish(md) {
  // remove only the {{" and "}} markers, keep inner text
  return md.replace(/\{\{\s*"/g, '').replace(/"\s*\}\}/g, '');
}

// ---------- mume HTML export ----------
async function mdToHtmlAbs(mdAbsPath) {
  const mume = require('@shd101wyy/mume'); // resolved from project node_modules
  const configPath = path.resolve(os.tmpdir(), '.mume');
  await mume.init(configPath);
  const engine = new mume.MarkdownEngine({
    filePath: mdAbsPath,
    config: {
      configPath,
      previewTheme: 'github-light.css',
      codeBlockTheme: 'default.css',
      printBackground: true,
      enableScriptExecution: false,
    },
  });
  await engine.htmlExport({ offline: false, runAllCodeChunks: false });
  // mume writes <same_dir>/<stem>.html
  return mdAbsPath.replace(/\.md$/i, '') + '.html';
}

// ---------- fs helpers ----------
async function ensureDir(p) { await fsp.mkdir(p, { recursive: true }); }
async function copyFile(src, dst) { await ensureDir(path.dirname(dst)); await fsp.copyFile(src, dst); }

// ---------- main pipeline ----------
async function processMarkdown(mdAbs, srcRoot, publicRoot) {
  const rel = path.relative(srcRoot, mdAbs);
  const outDir = path.join(publicRoot, path.dirname(rel));
  const stem = path.parse(mdAbs).name;

  const raw = await fsp.readFile(mdAbs, 'utf8');

  // (1) English version (strip markers only)
  const enMd = stripMarkersForEnglish(raw);
  const enTmp = path.join(path.dirname(mdAbs), `${stem}.__en_tmp__.md`);
  await fsp.writeFile(enTmp, enMd);
  const enHtmlPath = await mdToHtmlAbs(enTmp);
  const enOut = path.join(outDir, `${stem}_en.html`);
  await ensureDir(outDir);
  await copyFile(enHtmlPath, enOut);
  await fsp.unlink(enTmp).catch(()=>{});
  await fsp.unlink(enHtmlPath).catch(()=>{});

  // (2) Translations in ./i18n/<lang>_i18n.yaml (beside the md)
  const i18nDir = path.join(path.dirname(mdAbs), 'i18n');
  if (fs.existsSync(i18nDir) && fs.statSync(i18nDir).isDirectory()) {
    const files = await fsp.readdir(i18nDir);
    for (const f of files) {
      if (!f.endsWith('_i18n.yaml')) continue;
      const lang = f.slice(0, -'_i18n.yaml'.length);
      const map = await loadYaml(path.join(i18nDir, f));
      const replaced = replacePlaceholders(raw, map);
      const trTmp = path.join(path.dirname(mdAbs), `${stem}.__${lang}_tmp__.md`);
      await fsp.writeFile(trTmp, replaced);
      const trHtmlPath = await mdToHtmlAbs(trTmp);
      const trOut = path.join(outDir, `${stem}_${lang}.html`);
      await ensureDir(outDir);
      await copyFile(trHtmlPath, trOut);
      await fsp.unlink(trTmp).catch(()=>{});
      await fsp.unlink(trHtmlPath).catch(()=>{});
    }
  }
}

async function walkSrc(srcRoot, publicRoot) {
  const stack = [srcRoot];
  while (stack.length) {
    const dir = stack.pop();
    const entries = await fsp.readdir(dir, { withFileTypes: true });
    for (const ent of entries) {
      const abs = path.join(dir, ent.name);
      if (ent.isDirectory()) {
        stack.push(abs);
        continue;
      }
      const rel = path.relative(srcRoot, abs);
      const dst = path.join(publicRoot, rel);
      if (/\.md$/i.test(ent.name)) {
        await processMarkdown(abs, srcRoot, publicRoot);
      } else {
        await copyFile(abs, dst);
      }
    }
  }
}

// ---------- run ----------
(async () => {
  const projectRoot = process.cwd();
  const srcRoot = path.join(projectRoot, 'src');
  const publicRoot = path.join(projectRoot, 'public');

  if (!fs.existsSync(srcRoot)) {
    console.error('[ERROR] src directory not found:', srcRoot);
    process.exit(1);
  }
  await ensureDir(publicRoot);
  await walkSrc(srcRoot, publicRoot);
  console.log('[LOG] Site generation complete.');
})().catch(e => {
  console.error(e);
  process.exit(1);
});
