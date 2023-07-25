#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * dlist_len - function that calculates the length of a dlistint_t list
 * @h: pointer to the first node
 *
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t res = 0;

	while (h)
	{
		h = h->next;
		res++;
	}

	return (res);
}
