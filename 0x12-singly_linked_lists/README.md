# 0x12. C - Singly linked lists
`Algorithm` `Data Structure`

## Guidelines:
This project consists of coding tasks that cover:
- Data Structures
- Linked Lists

## Requirements (Part 1)
### Things you're allowed to do:
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the `root` of the folder of the project is mandatory
- Your code should use the `Betty style`. It will be checked using `betty-style.pl` and `betty-doc.pl`
- The only `C` standard library functions allowed are `malloc`, `free` and `exit`
- You are allowed to use `_putchar`
- You are given `main.c` files, use them.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your `header file` called `lists.h`
- All your `header files` should be `include` guarded

## Requirements (Part 2)
### Things you're not allowed to do:
- You are not allowed to use global variables
- You are not allowed more than 5 functions per file
- Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden

## More Info:
This data structure was used for this project:
`/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;`

## Files
	- `0-print_list.c`

## Compilation
The files are to be compiled with:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <input file> <output executable>`

## Author
[Akande Emmanuel](https://www.linkedin.com/in/iamdrolu)
