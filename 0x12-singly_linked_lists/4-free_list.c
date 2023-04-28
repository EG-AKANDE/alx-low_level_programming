#include "lists.h"
#include <stdlib.h>

/**
 * free_list - gets linked list freed
 * @head: linked list head
 *
 * Return: void
 */

void free_list(list_t *head)

{
	list_t *not_perm;

	while (head)
{
		not_perm = head;
		head = head->next;
		free(not_perm->str);
		free(not_perm);
}
}
