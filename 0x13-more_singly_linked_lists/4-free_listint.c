#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees listint_t list
 * @head: pntr to listint_t head
 *
 * Return: void
 **/

void free_listint(listint_t *head)

{

	listint_t *present = head;
	listint_t *next;

	while (present != NULL)
{
	next = present->next;
	free(present);
	present = next;
}
}
