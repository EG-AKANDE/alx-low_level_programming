#include "lists.h"

/**
 * get_dnodeint_at_index - Returns nth node
 * @head: list head pntr
 * @index: Index from 0
 *
 * Return: Address of nth node, NULL if unfound
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	unsigned int count = 0;

	while (head != NULL)
{
	if (count == index)
	return (head);

	head = head->next;
	count++;
}
	return (NULL);
}
