#include "lists.h"

/**
 * pop_listint - deletes head node of list.
 * @head: double pntr to node 1 in list.
 *
 * Return: 0 for empty list, else data in node (n).
 */

int pop_listint(listint_t **head)

{
	listint_t *not_perm;
	int n;

	if (*head == NULL)
	return (0);

	not_perm = *head;
	*head = (*head)->next;
	n = not_perm->n;
	free(not_perm);

	return (n);
}
