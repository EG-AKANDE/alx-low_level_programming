#include "lists.h"

/**
 * sum_listint - returns sum of all data (n) of list
 * @head: node head pntr
 *
 * Return: sum list data (n), 0 for none
 */

int sum_listint(listint_t *head)

{
	int added = 0;

	while (head != NULL)
{
	added += head->n;
	head = head->next;
}

	return (added);
}
