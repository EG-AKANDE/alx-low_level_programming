# 0x13 - More singly linked lists

## Description
This project consists of `C` coding tasks that cover `Algorithm` and `Data structure`.

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
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;`

## Files
        - `0-print_listint.c`: function that prints all the elements of a listint_t list.
	- `1-listint_len.c`: function that returns the number of elements in a linked listint_t list. 
	- `2-add_nodeint.c`: function that adds a new node at the beginning of a listint_t list.
	- `3-add_nodeint_end.c`: function that adds a new node at the end of a listint_t list.
	- `4-free_listint.c`: function that frees a listint_t list.
	- `5-free_listint2.c`: function that frees a listint_t list.
	- `6-pop_listint.c`: function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
	- `7-get_nodeint.c`: function that returns the nth node of a listint_t linked list.
	- `8-sum_listint.c`: function that returns the sum of all the data (n) of a listint_t linked list.
	- `9-insert_nodeint.c`: function that inserts a new node at a given position.
	- `10-delete_nodeint.c`: function that deletes the node at index index of a listint_t linked list.
	- `100-reverse_listint.c`: function that reverses a listint_t linked list.
	- `101-print_listint_safe.c`: function that prints a listint_t linked list.
	- `102-free_listint_safe.c`: function that frees a listint_t list.
	- `103-find_loop.c`: Write a function that finds the loop in a linked list.

## Compilation
The files are to be compiled with:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <input file> <output executable>`

## Author
[Akande Emmanuel](https://www.linkedin.com/in/iamdrolu)
