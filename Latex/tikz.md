# TikZ Node Graph Syntax Cheat Sheet

## 基本設定

```latex
\documentclass{article}
\usepackage{tikz}
\usetikzlibrary{positioning, arrows.meta, shapes}

\begin{document}
\begin{tikzpicture}
  % グラフをここに記述
\end{tikzpicture}
\end{document}
```

## ノードの基本構文

```latex
% 基本形
\node (name) at (x,y) {text};

% 座標指定
\node (A) at (0,0) {Node A};
\node (B) at (2,1) {Node B};

% 相対配置
\node[right=of A] (C) {Node C};
\node[below=of A] (D) {Node D};
\node[above right=of A] (E) {Node E};
```

## 位置指定オプション

```latex
% 相対位置（positioningライブラリ必須）
right=of nodename
left=of nodename
above=of nodename
below=of nodename
above right=of nodename

% 距離指定
right=2cm of nodename
below=1.5cm of nodename
```

## エッジ（接続）

```latex
% 基本的な矢印
\draw[->] (A) -- (B);
\draw[<-] (A) -- (C);
\draw[<->] (B) -- (C);
\draw[-] (A) -- (D);  % 矢印なし

% 曲線
\draw[->] (A) to[bend left] (B);
\draw[->] (A) to[bend right=45] (C);

% ラベル付き
\draw[->] (A) -- node[above] {label} (B);
\draw[->] (A) -- node[midway, right] {text} (C);
```

## ノードのスタイル

```latex
% 形状
\node[circle, draw] (A) {A};
\node[rectangle, draw] (B) {B};
\node[ellipse, draw] (C) {C};
\node[diamond, draw] (D) {D};

% 色とサイズ
\node[circle, draw=blue, fill=blue!20] (E) {E};
\node[rectangle, draw, minimum size=1cm] (F) {F};
\node[circle, draw, minimum width=2cm] (G) {G};

% テキストスタイル
\node[circle, draw, font=\Large\bfseries] (H) {H};
```

## エッジのスタイル

```latex
% 線のスタイル
\draw[->, thick] (A) -- (B);
\draw[->, dashed] (A) -- (C);
\draw[->, dotted] (A) -- (D);
\draw[->, red, very thick] (B) -- (C);

% 矢印のスタイル（arrows.metaライブラリ必須）
\draw[-Stealth] (A) -- (B);
\draw[-Latex] (A) -- (C);
\draw[->, >=Stealth] (A) -- (D);
```

## スタイルの定義

```latex
\tikzset{
  vertex/.style={circle, draw, minimum size=0.8cm},
  edge/.style={->, >=Stealth, thick},
  highlight/.style={fill=yellow!30}
}

\node[vertex] (A) {A};
\node[vertex, highlight] (B) {B};
\draw[edge] (A) -- (B);
```

## 複雑な配置例

```latex
% グリッド配置
\foreach \x in {0,1,2}
  \foreach \y in {0,1,2}
    \node[circle, draw] at (\x*2, \y*2) {\x,\y};

% 円形配置
\foreach \i in {1,...,8}
  \node[circle, draw] at ({360/8 * \i}:2cm) {N\i};
```

## よく使うパターン

### 木構造
```latex
\node (root) {Root};
\node[below left=of root] (L) {Left};
\node[below right=of root] (R) {Right};
\draw[->] (root) -- (L);
\draw[->] (root) -- (R);
```

### フローチャート
```latex
\node[rectangle, draw] (start) {Start};
\node[diamond, draw, below=of start] (decision) {Decision?};
\node[rectangle, draw, below left=of decision] (yes) {Yes};
\node[rectangle, draw, below right=of decision] (no) {No};

\draw[->] (start) -- (decision);
\draw[->] (decision) -- node[left] {Y} (yes);
\draw[->] (decision) -- node[right] {N} (no);
```

### 有向グラフ
```latex
\node[circle, draw] (1) {1};
\node[circle, draw, right=of 1] (2) {2};
\node[circle, draw, below=of 1] (3) {3};

\draw[->] (1) -- (2);
\draw[->] (2) to[bend left] (3);
\draw[->] (3) -- (1);
```

## 便利なTips

- `\usetikzlibrary{calc}` で座標計算が可能
- `\usetikzlibrary{automata}` で状態機械を簡単に描画
- `\usetikzlibrary{graphs}` でグラフ構文を簡略化
- `node distance=2cm` でデフォルトの距離を設定
- `every node/.style={...}` で全ノードにスタイル適用
