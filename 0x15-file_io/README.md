# `C Language` - `File I/O`

## Description
This project consists of `C` coding tasks that cover `Input/Output` and `Syscall`.

## Requirements (Part 1)
### Things you're allowed to do:
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the `root` of the folder of the project is mandatory
- Your code should use the `Betty style`. It will be checked using `betty-style.pl` and `betty-doc.pl`
- The only `C` standard library functions allowed are `malloc`, `free` and `exit`
- You are allowed to use `_putchar`
- You are given `main.c` files and other test files, use them.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your `header file` called `main.h`
- All your `header files` should be `include` guarded
- Tip: always prefer using symbolic constants (`POSIX`) vs numbers when it makes sense. For instance `read(STDIN_FILENO, ...` vs `read(0, ...`
## Requirements (Part 2)
### Things you're not allowed to do:
- You are not allowed to use global variables
- You are not allowed more than 5 functions per file
- Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden

## Files
        - `0-read_textfile.c`: function that reads a text file and prints it to the POSIX standard output.
        - `1-create_file.c`: function that creates a file.
        - `2-append_text_to_file.c`: function that appends text at the end of a file.
        - `3-cp.c`: program that copies the content of a file to another file.
        - `100-elf_header.c`: program that displays the information contained in the ELF header at the start of an ELF file.

## Compilation
The files are to be compiled with:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <input file> <output executable>`

## Author
[Akande Emmanuel](https://www.linkedin.com/in/iamdrolu)
