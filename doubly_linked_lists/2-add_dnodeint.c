#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds node to a dlistint list at the start
 * @head: pointer to pointer of first node
 * @n: data for new node
 *
 * Return: pointer to new node or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->prev = NULL;
		new->n = n;

		if (*head)
		{
			(*head)->prev = new;
			new->next = *head;
		}
		*head = new;
	}
	return (new);
}
