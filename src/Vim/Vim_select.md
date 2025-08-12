
| Command                    | Mode         | Description                                                                         |
| -------------------------- | ------------ | ----------------------------------------------------------------------------------- |
| `v`                        | Visual       | Start **character-wise** selection. Move the cursor to expand/shrink the selection. |
| `V`                        | Visual Line  | Start **line-wise** selection (entire lines are selected).                          |
| `Ctrl+v`                   | Visual Block | Start **block-wise** selection (columns).                                           |
| `gv`                       | Visual       | Reselect the last visual selection.                                                 |
| `o`                        | Visual       | Move cursor to the other end of the selection.                                      |
| `aw`                       | Visual       | Select "a word" (word + space).                                                     |
| `iw`                       | Visual       | Select "inner word" (just the word, no space).                                      |
| `ap`                       | Visual       | Select "a paragraph" (paragraph + blank line).                                      |
| `ip`                       | Visual       | Select "inner paragraph".                                                           |
| `a"` / `i"`                | Visual       | Select text **around** / **inside** double quotes.                                  |
| `a'` / `i'`                | Visual       | Select text **around** / **inside** single quotes.                                  |
| `a)` / `i)` or `ab` / `ib` | Visual       | Select text **around** / **inside** parentheses.                                    |
| `a]` / `i]`                | Visual       | Select text **around** / **inside** square brackets.                                |
| `a}` / `i}` or `aB` / `iB` | Visual       | Select text **around** / **inside** curly braces.                                   |
| `at` / `it`                | Visual       | Select **a tag block** / **inner tag** (HTML/XML).                                  |
