#include "lists.h"

/**
 * add_dnodeint_end - new node at end
 * @head: list head 2 pntr
 * @n: Value
 *
 * Return: new elmnt address, null for unfound
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *latest_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (latest_node == NULL)
	return (NULL);

	latest_node->n = n;
	latest_node->next = NULL;

	if (*head == NULL)
{
	latest_node->prev = NULL;
	*head = latest_node;
	return (latest_node);
}

	while (current->next != NULL)
	current = current->next;

	current->next = latest_node;
	latest_node->prev = current;
	return (latest_node);
}
