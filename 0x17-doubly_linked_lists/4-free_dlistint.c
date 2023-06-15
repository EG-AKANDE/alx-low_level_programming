#include "lists.h"

/**
 * free_dlistint - Frees list.
 * @head: list head pntr.
 *
 * Return: freed
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *temporary;

	while (head != NULL)
{
	temporary = head->next;
	free(head);
	head = temporary;
}
}
