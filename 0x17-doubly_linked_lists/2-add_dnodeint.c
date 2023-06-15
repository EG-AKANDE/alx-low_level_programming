#include "lists.h"

/**
 * add_dnodeint - new node
 * @head: list head 2 pntr
 * @n: Value
 *
 * Return: new elmnt address, null for unfound
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *latest_node = malloc(sizeof(dlistint_t));

	if (latest_node == NULL)
	return (NULL);

	latest_node->n = n;
	latest_node->prev = NULL;
	latest_node->next = *head;

	if (*head != NULL)
	(*head)->prev = latest_node;

	*head = latest_node;
	return (latest_node);
}
