# 42-get_next_line

Note: The file structure of this project has been modified.

In this project, we will be creating a function that returns a line read from a [file descriptor](https://stackoverflow.com/questions/5256599/what-are-file-descriptors-explained-in-simple-terms).

# Project Requirements

|    Requirements    |                        Description                        |
| :----------------: | :-------------------------------------------------------: |
|   Function name    |                       get_next_line                       |
|     Prototype      |              `char \*get_next_line(int fd)`               |
|   Turn in files    | `get_next_line.c, get_next_line_utils.c, get_next_line.h` |
|     Parameters     |          `fd`: the file descriptor to read from           |
| External functions |                   `read, malloc, free`                    |

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

- `make gnl` (runs the code in [`main.c`](main.c))

# Gnl Tester

Jean-Michel's gnl tester - https://github.com/Tripouille/gnlTester

# Credits

- [`GnlfTester`](https://github.com/Tripouille/gnlTester) by [Tripouille](https://github.com/Tripouille).
