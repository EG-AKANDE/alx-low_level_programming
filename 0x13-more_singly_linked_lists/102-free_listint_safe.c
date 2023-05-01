#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list.
 * @h: double pntr to list head
 *
 * Return: list size freed
 */

size_t free_listint_safe(listint_t **h)

{
	listint_t *present, *not_perm;
	size_t number_of = 0;

	if (h == NULL)
	return (0);

	present = *h;
	while (present != NULL)
{
	number_of++;
	if (present <= present->next)
{
	*h = NULL;
	return (number_of);
}
	not_perm = present;
	present = present->next;
	free(not_perm);
}

	*h = NULL;
	return (number_of);
}
