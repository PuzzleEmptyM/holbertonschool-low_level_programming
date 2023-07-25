#include "lists.h"

/**
 * sum_dlistint - Sums all the data in a dlistint list.
 * @head: Pointer to first node.
 *
 * Return: Sum of all data in nodes or 0 if list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	if (head)
	{
		if (head->next)
			return (head->n + sum_dlistint(head->next));
		return (head->n);
	}
	return (0);
}
