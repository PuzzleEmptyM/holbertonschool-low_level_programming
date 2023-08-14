#include "lists.h"
#include <stdlib.h>
#define UNS unsigned int
#include "1-dlistint_len.c"

/**
 * insert_dnodeint_at_index - Adds node at index of a dlistint_t linked list.
 * @head: Pointer to head pointer.
 * @index: Index wanted.
 * @n: Data for new node.
 *
 * Return: Pointer to requested node or NULL if fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, UNS index, int n)
{
	dlistint_t *new = NULL, *cursor, *aux;
	UNS len = dlistint_len(*head);

	if (head && (index <= len))
	{
		if (index == 0)
		{
			new = add_dnodeint(head, n);
			return (new);
		}
		else if (index == len)
		{
			new = add_dnodeint_end(head, n);
			return (new);
		}

		cursor = *head;
		while (index != 1)
		{
			cursor = cursor->next;
			index--;
		}
		aux = cursor->next;
		cursor->next = NULL;
		new = add_dnodeint_end(head, n);
		if (new)
		{
			aux->prev = new;
			new->next = aux;
		}
	}

	return (new);
}
