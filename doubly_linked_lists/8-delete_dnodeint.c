#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to head pointer of list.
 * @index: Index to delete.
 *
 * Return: 1 if succeeded, -1 if failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor;

	if (head)
	{
		cursor = *head;

		while (cursor)
		{
			if (index == 0)
				break;
			cursor = cursor->next;
			index--;
		}
		if (cursor)
		{
			if (cursor->prev)
				(cursor->prev)->next = cursor->next;
			if (cursor->next)
				(cursor->next)->prev = cursor->prev;
			if (*head == cursor)
				*head = cursor->next;
			free(cursor);
			return (1);
		}
	}
	return (-1);
}
