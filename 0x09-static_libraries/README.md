# 0x09. C - Static Libraries

## Description
This project is about creating a static library in C programming language.

## Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* OS: `Ubuntu 20.04 LTS`
* File: `libmy.a`, `main.c`, `main.h`
* Code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc... is forbidden
* You are allowed to use `_putchar`
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
* Don’t forget to push your header file
* All your header files should be include guarded
* A `README.md` file, at the root of the folder of the project, is mandatory
* Your code should use the `Wall`, `Werror`, and `Wextra` options

## Tasks

### Task 0
Create the static library `libmy.a`

### Task 1
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

## Files

### libmy.a
This file is the static library containing the following functions:
- `int _putchar(char c)`
- `int _islower(int c)`
- `int _isalpha(int c)`
- `int _abs(int n)`
- `int _isupper(int c)`
- `int _isdigit(int c)`
- `int _strlen(char *s)`
- `void _puts(char *s)`
- `char *_strcpy(char *dest, char *src)`
- `int _atoi(char *s)`
- `char *_strcat(char *dest, char *src)`
- `char *_strncat(char *dest, char *src, int n)`
- `char *_strncpy(char *dest, char *src, int n)`
- `int _strcmp(char *s1, char *s2)`
- `char *_memset(char *s, char b, unsigned int n)`
- `char *_memcpy(char *dest, char *src, unsigned int n)`
- `char *_strchr(char *s, char c)`
- `unsigned int _strspn(char *s, char *accept)`
- `char *_strpbrk(char *s, char *accept)`
- `char *_strstr(char *haystack, char *needle)`

### main.c
This file is a sample program that uses the `_puts()` function from `libmy.a` to print a quote on the standard output.

### main.h
This file contains the declarations of all functions used in `libmy.a`.

## Compilation
The static library `libmy.a` can be compiled using the following command:

gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc libmy.a *.o
ranlib libmy.a

This will create the `libmy.a` file in the directory.

The `main.c` file can be compiled using the following command:

gcc -Wall -Werror -Wextra -pedantic main.c -L. -lmy -o quote

This will create the `quote` executable file in the directory.

## Usage
To run the `quote` program, use the following command:
./quote

This will print the following quote on the standard output:
"At the end of the day, my goal was to be the best hacker"
- Kevin Mitnick


## Author
* [Akande Emmanuel](https://github.com/EG-AKANDE)
