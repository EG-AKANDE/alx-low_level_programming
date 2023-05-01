#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pntr to pntr to list head
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *before = NULL, *now = *head, *next = NULL;

	while (now != NULL)
{
	next = now->next;
	now->next = before;
	before = now;
	now = next;
}

	*head = before;

	return (*head);
}
