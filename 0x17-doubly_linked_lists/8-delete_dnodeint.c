#include "lists.h"

/**
 * delete_dnodeint_at_index - node
 * @head: head list 2 pntr
 * @index: Index
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	dlistint_t *present = *head;
	unsigned int count = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
{
	*head = present->next;
	if (present->next != NULL)
	present->next->prev = NULL;
	free(present);
	return (1);
}

	while (present != NULL)
{
	if (count == index)
{
	if (present->next != NULL)
	present->next->prev = present->prev;
	if (present->prev != NULL)
	present->prev->next = present->next;
	free(present);
	return (1);
}
	present = present->next;
	count++;
}

	return (-1);
}
