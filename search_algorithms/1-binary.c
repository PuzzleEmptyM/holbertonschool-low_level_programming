#include "search_algos.h"

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
