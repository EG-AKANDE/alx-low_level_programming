#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - plus new node to start of listint_t
 * @head: two pntr to head listint_t
 * @n: integer value to be assigned to the new node
 *
 * Return: new elmnt address, NULL upon failure
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *node_two = malloc(sizeof(listint_t));

	if (node_two == NULL)
	return (NULL);

	node_two->n = n;
	node_two->next = *head;
	*head = node_two;
	return (node_two);
}
