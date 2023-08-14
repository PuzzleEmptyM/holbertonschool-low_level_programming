#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees dlistint list.
 * @head: Pointer to first element of list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
