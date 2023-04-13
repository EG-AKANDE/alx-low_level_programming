# 0x0C - C - More malloc, free

## Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`.
- You are allowed to use `_putchar`
- You are allowed to use the `main.c` files
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`

## Project
The project contains:

### Header File
- `main.h`: Main header file

### Source
- `0-malloc_checked.c`: Function that allocates memory using `malloc`
- `1-string_nconcat.c`: Function that concatenates two strings
- `2-calloc.c`: Function that allocates memory for an array, using `malloc`
- `3-array_range.c`: Function that creates an array of integers

### Tests
- `0-main.c`: Main file to test `0-malloc_checked.c`
- `1-main.c`: Main file to test `1-string_nconcat.c`
- `2-main.c`: Main file to test `2-calloc.c`
- `3-main.c`: Main file to test `3-array_range.c`

## Compilation
Code will be compiled using the command:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89

## Author
Akande Emmanuel (https://github.com/EG-AKANDE)
