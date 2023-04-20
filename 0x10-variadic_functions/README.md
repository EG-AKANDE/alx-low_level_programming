# 0x10. C - Variadic functions

## Description
This project contains coding tasks that cover:
	- `stdarg.h`
	- Variadic Functions
	- `Const` Keyword
	- `va_start`, `va_arg` and `va_end` macros
	- Why and how to use the `const type` qualifier

## Requirements (Part 1)
### Things you're allowed to do:
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the `root` of the folder of the project is mandatory
- Your code should use the `Betty style`. It will be checked using `betty-style.pl` and `betty-doc.pl`
- The only `C` standard library functions allowed are `malloc`, `free` and `exit`
- You are allowed to use the following `macros`: `va_start`, `va_arg` and `va_end`
- You are allowed to use `_putchar`
- You are given `main.c` files, use them.
- The prototypes of all your functions and the `prototype` of the function `_putchar` should be included in your `header file` called `variadic_functions.h`
- All your header files should be `include` guarded

## Requirements (Part 2)
### Things you're not allowed to do:
- You are not allowed to use global variables
- You are not allowed more than 5 functions per file
- Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden

## Files
	- `0-sum_them_all.c`: function that returns the sum of all its parameters.
	- `1-print_numbers.c`: function that prints numbers, followed by a new line.
	- `2-print_strings.c`: function that prints strings, followed by a new line.
	- `3-print_all.c`: function that prints anything.

## Compilation
To compile, use:
	`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <input file> <output file>`

## Author
[Akande Emmanuel](https://www.linkedin.com/in/iamdrolu)
