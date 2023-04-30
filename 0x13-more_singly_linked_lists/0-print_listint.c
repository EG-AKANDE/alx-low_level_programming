#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: pntr to head of list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t how_many = 0;

	while (h != NULL)
{
	printf("%d\n", h->n);
	how_many++;
	h = h->next;
}

	return (how_many);
}
