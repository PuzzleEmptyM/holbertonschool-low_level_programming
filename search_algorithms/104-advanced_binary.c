#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: value to search for.
 *
 * Conditions:
 *     @array will be sorted in ascending order.
 *     @value might appear more than once in array
 *
 * Return: the index where value is located. -1 otherwise.
 */


int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (rec_binary(array, 0, size - 1, value));
}

/**
 * rec_binary - searches for a value in a sorted array of integers using
 *              binary search in a recursive way.
 * @array: pointer to the first element of the array to search in.
 * @lower: lower index of the sub-array.
 * @upper: upper index of the sub-array
 * @value: value to search for.
 *
 * Return: the index where value is located. -1 otherwise.
 */

int rec_binary(int *array, int lower, int upper, int value)
{
	int half = (lower + upper) / 2, idx = 0;

	if (lower == upper && array[lower] == value)
		return (lower);
	else if (lower == upper)
		return (-1);

	printf("Searching in array: ");
	print_array(array, lower, upper);
	if (array[half] < value)
		idx = rec_binary(array, half + 1, upper, value);
	else
		idx = rec_binary(array, lower, half, value);
	return (idx);
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
