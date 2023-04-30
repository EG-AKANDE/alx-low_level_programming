#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node, of list.
 * @head: pntr to head node of list
 * @index: node index from 0
 *
 * Return: nth node pntr, NULL for nonexistent
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i;
	listint_t *present;

	if (head == NULL)
	return (NULL);

	present = head;
	for (i = 0; present != NULL && i < index; i++)
	present = present->next;

	return (present == NULL ? NULL : present);
}
