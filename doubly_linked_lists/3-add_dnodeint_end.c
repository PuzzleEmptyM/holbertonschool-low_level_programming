#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds node to a dlistint list at the end.
 * @head: Pointer to pointer of first node.
 * @n: Data for new node.
 *
 * Return: Pointer to new node or NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tail;

	if (head)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->next = NULL;
		new->n = n;

		if (*head)
		{
			tail = *head;
			while (tail->next)
				tail = tail->next;
			tail->next = new;
			new->prev = tail;
		}
		else
		{
			new->prev = NULL;
			*head = new;
		}
	}
	return (new);
}
