# 42-get_next_line

Note: The file structure of this project has been modified.

# Project Requirements

|     Functions      |                      Description                       |
| :----------------: | :----------------------------------------------------: |
|    Program name    |                     libftprintf.a                      |
|   Turn in files    |         Makefile, \*.h, \*/\*.h, \*.c, \*/\*.c         |
| External functions | malloc, free, write, va_start, va_arg, va_copy, va_end |

# Compilation

- `make` - compiles `gnl` program
- `make clean` - removes the obj folder
- `make fclean` - clean and removes `gnl` program
- `make re` - fclean and recompiles

To use the library functions in your code, simply include its' header ([`get_next_line.h`](inc/get_next_line.h)):

```
#include "get_next_line.h"
```

# Local testing

- Uncomment definition of BUFFER_SIZE in [`get_next_line.h`](inc/get_next_line.h).

```
#define BUFFER_SIZE 500
```

- after compiling with `make`, run `./gnl` (runs the code in [`main.c`](main.c))

# Gnl Tester

Jean-Michel's gnl tester - https://github.com/Tripouille/gnlTester

# Credits

- [`GnlfTester`](https://github.com/Tripouille/gnlTester) by [Tripouille](https://github.com/Tripouille).
