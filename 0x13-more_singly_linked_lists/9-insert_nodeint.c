#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: double pntr to head node
 * @idx: index of list to add new node
 * @n: new node value
 *
 * Return: new node address, NULL upon failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *node_two, *not_perm;
	unsigned int q = 0;

	if (head == NULL)
	return (NULL);

	node_two = malloc(sizeof(listint_t));
	if (node_two == NULL)
	return (NULL);

	node_two->n = n;
	not_perm = *head;

	if (idx == 0)
{
	node_two->next = not_perm;
	*head = node_two;
	return (node_two);
}

	while (q < idx - 1)
{
	if (not_perm == NULL)
{
	free(node_two);
	return (NULL);
}
	not_perm = not_perm->next;
	q++;
}

	node_two->next = not_perm->next;
	not_perm->next = node_two;
	return (node_two);
}
