#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints linked list.
 * @head: first node pntr
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)

{
	size_t number_of = 0;
	const listint_t *present;

	while (head != NULL)
{
	present = head;
	head = head->next;
	number_of++;
	printf("[%p] %d\n", (void *)present, present->n);
	if (present <= head)
{
	printf("-> [%p] %d\n", (void *)head, head->n);
	break;
}
}

	return (number_of);
}
