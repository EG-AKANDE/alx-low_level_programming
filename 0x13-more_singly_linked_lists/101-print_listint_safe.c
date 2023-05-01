#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pntr to list start
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)

{
	size_t number_of = 0;
	const listint_t *present, *inspect;

	if (head == NULL)
	exit(98);

	present = head;

	while (present != NULL)
{
	inspect = head;
	number_of++;

	printf("[%p] %d\n", (void *) present, present->n);

	while (inspect != present)
{
	if (inspect == present->next)
{
	printf("-> [%p] %d\n", (void *) inspect, inspect->n);
	return (number_of);
}
	inspect = inspect->next;
}

	present = present->next;
}

	return (number_of);
}
