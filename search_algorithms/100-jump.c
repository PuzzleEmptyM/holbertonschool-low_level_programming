#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of
 *               integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: The first index where value is located. -1 otherwise.
 */

int jump_search(int *array, size_t size, int value)
{
	int b = 0, prev = 0, s = size;

	if (array == NULL || s == 0)
		return (-1);

	b = sqrt(s);
	/* finding interval in which @value is*/
	while (array[b] < value && b < s)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = b;
		b = b + sqrt(s);
		if (b > s)
			break;
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%d] and [%d]\n", prev, b);
	while (prev < s && array[prev] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
