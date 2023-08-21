#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of
 *             integers using the Jump search algorithm.
 * @list: pointer to the head of the list to search in.
 * @size: number of nodes in @list.
 * @value: value to search for.
 *
 * Return: pointer to the first node where value is located.
 *         NULL otherwise.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int b = 0, prev = 0;
	listint_t *b_ptr = list, *prev_ptr = list;

	if (list == NULL || size == 0)
		return (NULL);
	b = sqrt(size);
	while (b_ptr->index != (size_t)b)
		b_ptr = b_ptr->next;
	/* finding interval in which @value is*/
	printf("Value checked at index [%lu] = [%d]\n", b_ptr->index, b_ptr->n);
	while (b_ptr->n < value)
	{
		prev = b;
		prev_ptr = b_ptr;
		b = b + sqrt(size);
		if ((size_t)prev >= size)
			return (NULL);
		if ((size_t)b > size)
			b = size;
		while (b_ptr->index != (size_t)(b - 1))
			b_ptr = b_ptr->next;
		printf("Value checked at index [%lu] = [%d]\n", b_ptr->index, b_ptr->n);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, b);
	printf("Value checked at index [%lu] = [%d]\n", prev_ptr->index, prev_ptr->n);
	while (prev_ptr->n < value)
	{
		prev++;
		if (prev > b)
			return (NULL);
		printf("Value checked at index [%lu] = [%d]\n",
		       prev_ptr->index, prev_ptr->n);
		prev_ptr = prev_ptr->next;
	}
	if (prev_ptr->n != value)
		return (NULL);
	return (prev_ptr);
}
