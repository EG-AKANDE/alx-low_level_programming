#include "lists.h"

/**
 * list_len - gives the elements count in linked list_t
 * @h: head of list pntr
 *
 * Return: elements count in list
 */

size_t list_len(const list_t *h)

{
	size_t count = 0;

	while (h != NULL)
{
	h = h->next;
	count++;
}
	return (count);
}
