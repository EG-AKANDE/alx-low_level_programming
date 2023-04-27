#include "lists.h"

/**
 * add_node_end - plus new node at end of list_t
 * @head: pntr to list head
 * @str: str for new node
 *
 * Return: address of new element, NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *node_two, *not_perm;

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

	node_two->len = 0;
	while (node_two->str[node_two->len] != '\0')
	node_two->len++;

	node_two->next = NULL;

	if (*head == NULL)
{
	*head = node_two;
}
	else
{
	not_perm = *head;
	while (not_perm->next != NULL)
	not_perm = not_perm->next;
	not_perm->next = node_two;
}

	return (node_two);
}
