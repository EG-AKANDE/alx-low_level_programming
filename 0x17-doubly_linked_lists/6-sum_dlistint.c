#include "lists.h"

/**
 * sum_dlistint - sum of n
 * @head: list head pntr
 *
 * Return: sum of n, 0 for empty list
 */

int sum_dlistint(dlistint_t *head)

{
	int total = 0;

	while (head != NULL)
{
	total += head->n;
	head = head->next;
}
	return (total);
}
