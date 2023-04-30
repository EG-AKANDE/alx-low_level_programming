#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of list.
 * @head: double pntr to head node of list.
 * @n: integer for new
 *
 * Return: new elmnt address, else, NULL on failed allocation or null head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *another, *present;

	another = malloc(sizeof(listint_t));
	if (!another)
	return (NULL);

	another->n = n;
	another->next = NULL;

	if (*head == NULL)
	*head = another;
	else
{
	present = *head;
	while (present->next)
	present = present->next;
	present->next = another;
}

	return (another);
}
