#include "lists.h"

/**
 * insert_dnodeint_at_index - new node at specific point
 * @h: head list 2 pntr
 * @idx: Index
 * @n: Value
 *
 * Return: address, null for failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *latest_node;
	dlistint_t *present = *h;
	unsigned int count = 0;

	if (idx == 0)
	return (add_dnodeint(h, n));

	while (present != NULL)
{
	if (count == idx)
{
	latest_node = malloc(sizeof(dlistint_t));
	if (latest_node == NULL)
	return (NULL);

	latest_node->n = n;
	latest_node->prev = present->prev;
	latest_node->next = present;
	present->prev->next = latest_node;
	present->prev = latest_node;
	return (latest_node);
}
	present = present->next;
	count++;
}

	if (count == idx)
	return (add_dnodeint_end(h, n));

	return (NULL);
}
