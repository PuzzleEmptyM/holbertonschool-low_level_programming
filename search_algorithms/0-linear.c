#include "search_algos.h"


/**
 * linear_search - Searches for a value in an array of integers using
 *                 the Linear search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: value to search for.
 *
 * Return: the first index where value is located, -1 otherwise.
 */


int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size && array[idx] != value; idx++)
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	if (idx == size)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	return (idx);
}
