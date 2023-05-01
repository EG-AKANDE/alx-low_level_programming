#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of list
 * @head: list head pntr
 * @index: index of node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *not_perm, *before = NULL;
	unsigned int q;

	if (head == NULL || *head == NULL)
	return (-1);

	not_perm = *head;

	if (index == 0)
{
	*head = (*head)->next;
	free(not_perm);
	return (1);
}

	for (q = 0; not_perm && q < index; q++)
{
	before = not_perm;
	not_perm = not_perm->next;
}

	if (not_perm == NULL)
	return (-1);

	before->next = not_perm->next;
	free(not_perm);
	return (1);
}
