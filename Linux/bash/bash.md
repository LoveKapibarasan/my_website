# bash = Bourne-Again Shell <--bone again
* Interpreter
## Give a permission
```bash
chmod +x name.sh
./name.sh # ./= current dir
```
## Syntax

* No generics or interface.

### header

**Shebang**
* `#!/bin/bash`= POSIX shell
* `#!/bin/bash` = bash
* `#!/usr/bin/env python3` = python 3
> Put **the first** line.

**Array**
```bash
name=("xxx" "yyy" "zzz")
# or
name=(
    "xxx"
    "yyy"
    "zzz"
)
for x in "${name[@]}"; do
```

* NG `a = b`
* OK`a=b`

* Indend is not necessary

## Variable Expansion

```bash
"${name}"
"$name" # not single quote
"${name:-default}"
($command)
```

* No multi-line comment

## Here Document
* If you use a here-document (`<<EOF ... EOF`) in a .sh script, you can automate interactive commands like sqlite3, psql, or iwctl.

* can also give instructions in a script after entering a **chroot** in the same way.

### Command Line Arguments
```
all_arguments="$@"
x="$1"
y="$2"

if [ -z "$y" ] || [ -Z "$y"]; then
    echo "Usage: $0 <xxx> <yyy>"
    exit 1
fi

function x_value y_value
```


###  **Color = ASCII**

```bash
COL_NC='\e[0m'        # (reset)
COL_WHITE='\e[1;37m'  # White
COL_GREEN='\e[0;32m'  # Green
COL_YELLOW='\e[1;33m' # Yellow
COL_RED='\e[1;31m'    # Red
# Usage
echo -e "${COL_GREEN}Green text${COL_NC}"
echo -e "${COL_RED}Red text${COL_NC}"
```

### TUI (Text User Interface)
* ncurses 
```c
#include <ncurses.h>

int main() {
    initscr();              // ncurses initialize
    printw("Hello World!"); 
    move(5, 10);            // Move cursor
    refresh();              // 
    getch();                // Wait key input
    endwin();               // Exit
    return 0;
}
```

*  curses
```python
import curses

def main(stdscr):
    stdscr.clear()
    stdscr.addstr(0, 0, "Move with the cursor.")
    
    y, x = 5, 10
    while True:
        stdscr.addstr(y, x, "●")
        stdscr.refresh()
        
        key = stdscr.getch()
        stdscr.addstr(y, x, " ")  
        
        if key == curses.KEY_UP:
            y -= 1
        elif key == curses.KEY_DOWN:
            y += 1
        elif key == curses.KEY_LEFT:
            x -= 1
        elif key == curses.KEY_RIGHT:
            x += 1

curses.wrapper(main)
```
