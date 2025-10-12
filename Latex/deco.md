
### Header and Footer
```tex
\usepackage{fancyhdr}
\pagestyle{fancy}
\fancyhf{} 
\fancyhead[L]{\leftmark}     % section name(Do not use *)
\fancyhead[R]{\thepage}      % page number
\fancyhead[C]{Title}   % Custom number
```

### Color for sections

```tex
\titleformat{\section}
  {\color{blue}\normalfont\Large\bfseries}  % Blue, Bold
  {\thesection}{1em}{}
```
