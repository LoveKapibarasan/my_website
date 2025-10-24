
* `\begin{align*}`, `\section*{}`: Do not enumerate


* `$$\begin{xxx}...\end{xxx}$$`: Do not use `$` 
* `\begin{xxx}...\end{xxx}`: Use `$`
    * OK: array
    * NG: table, align(already math mode)

**Empty Line**: Paragraph line

**answer**
```latex
Answer: $\underline{\underline{x = 4}}$
\boxed{x=4}
```

**brancket**
```latex
\left( \frac{a}{b} \right)
```

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

