# LaTeX Syntax Cheat Sheet

## Document Structure

```latex
\documentclass[options]{class}  % article, report, book, beamer
\usepackage{packagename}        % Load packages
\title{Title}
\author{Author Name}
\date{\today}                   % or specific date

\begin{document}
\maketitle                      % Create title
% Content here
\end{document}
```

## Text Formatting

```latex
\text {Hello, $E=mg$}
\textbf{bold text}              % Bold
\textit{italic text}            % Italic
\underline{underlined}          % Underline
\texttt{monospace}              % Monospace/typewriter
\emph{emphasized}               % Emphasis (usually italic)

\textsc{Small Caps}             % Small capitals
\textsuperscript{superscript}   % Superscript
\textsubscript{subscript}       % Subscript (needs fixltx2e)

{\small small text}             % Size: tiny, small, normal,
{\Large large text}             % large, Large, LARGE, huge, Huge
```

## Sections and Structure

```latex
\section{Section Title}
\subsection{Subsection Title}
\subsubsection{Subsubsection Title}
\paragraph{Paragraph Title}
\subparagraph{Subparagraph Title}

\section*{Unnumbered Section}   % * removes numbering

\tableofcontents                % Generate table of contents
\newpage                        % Force new page
\pagebreak                      % Page break
```

## Lists

```latex
% Unordered list
\begin{itemize}
  \item First item
  next line
  \item Second item
\end{itemize}

% Ordered list
\begin{enumerate}
  \item First item
  \item Second item
\end{enumerate}

% Description list
\begin{description}
  \item[Term] Definition
  \item[Another] Description
\end{description}
```

## Math Mode

```latex
$inline math$                   % Inline math
\( inline math \)               % Alternative inline

\[ display math \]              % Display math (centered)
$$ display math $$              % Alternative (not recommended)

\begin{equation}                % Numbered equation
  E = mc^2
\end{equation}

\begin{equation*}               % Unnumbered equation
  E = mc^2
\end{equation*}
```

## Common Math Symbols

```latex
% Greek letters
\alpha, \beta, \gamma, \delta, \epsilon
\theta, \lambda, \mu, \pi, \sigma, \omega
\Gamma, \Delta, \Theta, \Lambda, \Sigma, \Omega

% Operators
+  -  \times  \div  \pm  \mp
=  \neq  \approx  \equiv  \leq  \geq
<  >  \ll  \gg

% multiply
$3 \times 5 = 15$
$2 \cdot 3 = 6$

% Fractions and roots
\frac{numerator}{denominator}
\sqrt{x}                        % Square root
\sqrt[n]{x}                     % nth root

% Superscript and subscript
x^{2}                           % Superscript
x_{i}                           % Subscript
x^{2}_{i}                       % Both

% Calculus
\int  \sum  \prod  \lim  \partial
\int_{a}^{b}                    % Integral with limits
\sum_{i=1}^{n}                  % Sum with limits

% Sets
\in  \notin  \subset  \subseteq
\cup  \cap  \emptyset  \mathbb{R}

%% cUp=U and cap

% Logic
\forall  \exists  \nexists
\land  \lor  \neg  \implies  \iff

% Arrows
\rightarrow  \leftarrow  \Rightarrow  \Leftarrow
\leftrightarrow  \Leftrightarrow
```

## Tables

```latex
\begin{table}[h]                % h=here, t=top, b=bottom
  \centering
  \begin{tabular}{|c|l|r|}      % c=center, l=left, r=right
    \hline
    Header 1 & Header 2 & Header 3 \\
    \hline
    Cell 1 & Cell 2 & Cell 3 \\
    Cell 4 & Cell 5 & Cell 6 \\
    \hline
  \end{tabular}
  \caption{Table caption}
  \label{tab:mytable}
\end{table}
```

## Figures

```latex
\begin{figure}[h]
  \centering
  \includegraphics[width=0.8\textwidth]{filename}
  \caption{Figure caption}
  \label{fig:myfigure}
\end{figure}

% Requires: \usepackage{graphicx}
```

## References and Citations

```latex
\label{key}                     % Create label
\ref{key}                       % Reference number
\pageref{key}                   % Page number reference

\cite{citation_key}             % Citation
\bibliography{bibfile}          % Bibliography file
\bibliographystyle{style}       % plain, alpha, abbrv, etc.
```

## Special Characters

```latex
\%  \$  \&  \#  \_  \{  \}      % Escaped characters
\~{}  \^{}                      % Tilde and caret
\textbackslash                  % Backslash

\dots  or  \ldots               % Ellipsis (...)
---                             % Em dash
--                              % En dash
``quotes''                      % Proper quotes
```

## Spacing

```latex
\,          % Thin space
\:          % Medium space
\;          % Thick space
\quad       % 1em space
\qquad      % 2em space
\\          % Line break
\\[1cm]     % Line break with space

\vspace{1cm}    % Vertical space
\hspace{1cm}    % Horizontal space
```

## Environments

```latex
\begin{center}
  Centered text
\end{center}

\begin{flushleft}
  Left-aligned text
\end{flushleft}

\begin{flushright}
  Right-aligned text
\end{flushright}

\begin{verbatim}
  Code or text exactly as typed
\end{verbatim}

\begin{quote}
  Short quotation
\end{quote}

\begin{quotation}
  Longer quotation with indentation
\end{quotation}
```

## Common Packages

```latex
\usepackage{amsmath}            % Advanced math
\usepackage{amssymb}            % Math symbols
\usepackage{graphicx}           % Include graphics
\usepackage{hyperref}           % Hyperlinks
\usepackage{geometry}           % Page layout
\usepackage{color}              % Colors
\usepackage{listings}           % Code listings
\usepackage{tikz}               % Graphics/diagrams
\usepackage{babel}              % Language support
\usepackage{natbib}             % Bibliography
```
## Arrow
```latex
\rightarrow        →
\leftarrow         ←
\leftrightarrow    ↔
\Rightarrow        ⇒
\Leftarrow         ⇐
\Leftrightarrow    ⇔
```

## Comments

```latex
% This is a single-line comment

\begin{comment}
  This is a multi-line comment
  (requires \usepackage{verbatim})
\end{comment}
```

## Useful Tips

**Compiling**: Most documents need to be compiled multiple times for references and citations to work properly (usually 2-3 times).

**Non-breaking space**: Use `~` for a non-breaking space, e.g., `Figure~\ref{fig:example}`.

**Paragraph**: Leave a blank line to start a new paragraph. Don't use `\\` for paragraphs.

**Units**: Use the `siunitx` package for proper unit formatting: `\SI{5}{\meter}`.

**Quotation marks**: Use `` for opening quotes and `''` for closing quotes.
