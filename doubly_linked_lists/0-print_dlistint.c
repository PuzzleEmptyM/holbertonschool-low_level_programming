#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to the first node
 *
 * Return: Number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t res = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		res++;
	}

	return (res);
}
