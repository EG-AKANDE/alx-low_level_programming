#include "lists.h"

/**
 * find_listint_loop - finds loop.
 *
 * @head: Pntr to head node.
 *
 * Return: address of node loop starts, NULL if no loop.
 */

listint_t *find_listint_loop(listint_t *head)

{
	listint_t *sl = head;
	listint_t *fs = head;

	while (fs && fs->next)
{
	sl = sl->next;
	fs = fs->next->next;

	if (sl == fs)
{
	sl = head;

	while (sl != fs)
{
	sl = sl->next;
	fs = fs->next;
}

	return (fs);
}
}

	return (NULL);
}
