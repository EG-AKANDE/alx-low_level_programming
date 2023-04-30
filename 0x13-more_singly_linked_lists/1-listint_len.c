#include "lists.h"

/**
 * listint_len - returns elements count in linked list
 * @h: pntr, head of list
 *
 * Return: nodes count
 */

size_t listint_len(const listint_t *h)

{
	size_t number_of = 0;

	while (h != NULL)
{
	number_of++;
	h = h->next;
}

	return (number_of);
}
