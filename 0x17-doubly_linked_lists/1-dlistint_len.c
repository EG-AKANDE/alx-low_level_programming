#include "lists.h"

/**
 * dlistint_len - element count
 * @h: list head pntr
 *
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)

{
	size_t count = 0;

	while (h != NULL)
{
	h = h->next;
	count++;
}
	return (count);
}
