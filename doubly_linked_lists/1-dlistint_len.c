#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - function that calculates length of a dlistint_t list
 * @h: pointer to first node
 *
 * Return: number of elements in list
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
