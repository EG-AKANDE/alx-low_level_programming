#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints list_t elements list
 * @h: pnter to list head
 *
 * Return: nodes number
 */

size_t print_list(const list_t *h)

{
	size_t count = 0;

	while (h != NULL)
{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	count++;
}
	return (count);
}
