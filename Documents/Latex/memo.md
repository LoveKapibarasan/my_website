
* `\begin{align*}`, `\section*{}`: Do not enumerate


* `$$\begin{xxx}...\end{xxx}$$`: Do not use `$` 
* `\begin{xxx}...\end{xxx}`: Use `$`
    * OK: array
    * NG: table, align(already math mode)

**Empty Line**: Paragraph line

**New Page**
`\newpage`
`\clearpage`: Including Charts

**answer**
```latex
Answer: $\underline{\underline{x = 4}}$
\boxed{x=4}
\checkmark
```

**brancket**
```latex
\left( \frac{a}{b} \right)
```

**Paragraph**
* blankline or `\par`

**Indent**
* `\indent`

**Indent First**
* `\usepackage{indentfirst}`
* Indent all first paragraph

* Escape `_` inside a `\text{}`



### R
```latex
\usepackage{amsfonts}
\usepackage{amssymb}
$\mathbb{R}$ 
$\mathbb{N}$
$\mathbb{Z}$
$\mathbb{Q}$
$\mathbb{C}$
```

**Absolute Value**
`|`


**QDE(Quod Erat Demonstrandum)**
```
\usepackage{amssymb}
QDE：\square
```

**Combination**

`C(x,y)` or `$$\binom{x}{y}$$` or `${}_{n}C_{k}$`(rare)


**3 dot**
```latex
\usepackage{amsymb}
\because
\therefore
```

**Change Tabular Height**
```latex
% preamble
\usepackage{array}
\renewcommand{\arraystretch}{1.5}
```

**Compiling**: Most documents need to be compiled multiple times for references and citations to work properly (usually 2-3 times).

**Non-breaking space**: Use `~` for a non-breaking space, e.g., `Figure~\ref{fig:example}`.

**Paragraph**: Leave a blank line to start a new paragraph. Don't use `\\` for paragraphs.

**Units**: Use the `siunitx` package for proper unit formatting: `\SI{5}{\meter}`.

**Quotation marks**: Use `` for opening quotes and `''` for closing quotes.
