#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array
 *                      of integers using the Exponential search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: value to search for.
 *
 * Conditions:
 *     @array will be sorted in ascending order.
 *     @value wont appear more than once in array
 *
 * Return: the index where value is located. -1 otherwise.
 */

int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, l_bound = 0, found = -1;

	if (array == NULL)
		return (-1);

	while ((size_t)bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound = bound * 2;
	}

	l_bound = (int)(bound / 2);

	if ((size_t)(bound + 1) > size)
		bound = size;
	else
		bound = bound + 1;

	printf("Value found between indexes [%d] and [%d]\n", l_bound, bound - 1);
	found = binary_search(&array[l_bound], (bound - l_bound), value);
	if (found != -1)
		found = found + l_bound;
	return (found);
}



/**
 * binary_search - Searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: value to search for.
 *
 * Conditions:
 *     @array will be sorted in ascending order.
 *     @value wont appear more than once in array
 *
 * Return: the index where value is located. -1 otherwise.
 */


int binary_search(int *array, size_t size, int value)
{
	int l, r, half;

	if (array == NULL)
		return (-1);

	r = size - 1;
	l = 0;
	while (l <= r)
	{
		printf("Searching in array: ");
		print_array(array, l, r);
		half = (l + r) / 2;
		if (array[half] < value)
			l = half + 1;
		else if (array[half] > value)
			r = half - 1;
		else
			return (half);
	}

	return (-1);
}

/**
 * print_array - prints a slice of the array from @l to @r.
 * @array: is a pointer to the array to print.
 * @l: left-most index to start the printing from in the array.
 * @r: right-most index to print in the array.
 *
 * Return: void.
 */

void print_array(int *array, int l, int r)
{
	printf("%d", array[l]);
	for (l = l + 1; l <= r; l++)
		printf(", %d", array[l]);
	printf("\n");
}
