#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - plus new node at beginning of list_t
 * @head: Pntr to pointer to list node head
 * @str: str pntr to  for adding to node
 *
 * Return: new node pntr, NULL for error
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *node_two;

	if (head == NULL || str == NULL)
	return (NULL);

	node_two = malloc(sizeof(list_t));
	if (node_two == NULL)
	return (NULL);

	node_two->str = strdup(str);
	if (node_two->str == NULL)
{
	free(node_two);
	return (NULL);
}

	node_two->len = strlen(str);
	node_two->next = *head;
	*head = node_two;

	return (node_two);
}
