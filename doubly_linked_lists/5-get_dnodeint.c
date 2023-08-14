#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to first node.
 * @index: Index wanted.
 *
 * Return: Pointer to requested node or NULL if node doesnt exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head)
	{
		if (index == 0)
			return (head);
		head = head->next;
		index--;
	}
	return (head);
}
