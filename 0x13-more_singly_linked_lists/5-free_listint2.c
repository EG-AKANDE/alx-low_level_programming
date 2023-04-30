#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees listint_t, sets head equals NULL.
 * @head: double pntr to start of list.
 *
 * Return: Void.
 */

void free_listint2(listint_t **head)

{

	listint_t *not_perm;

	if (head == NULL)
	return;

	while (*head != NULL)
{
	not_perm = (*head)->next;
	free(*head);
	*head = not_perm;
}
	*head = NULL;
}
