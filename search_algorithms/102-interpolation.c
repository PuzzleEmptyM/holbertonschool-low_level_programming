#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of
 *                        integers using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: The first index where @value is located. -1 Otherwise.
 */


int interpolation_search(int *array, size_t size, int value)
{
	int l = 0, h = size - 1, mid = 0;

	if (array == NULL || size == 0)
		return (-1);
	/*if (size == 1)
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		if (array[0] == value)
			return (0);
		else
			return (-1);
			}*/
	mid = l + ((value - array[l]) * (h - l) / (array[h] - array[l]));
	if ((size_t)mid >= size)
		printf("Value checked array[%d] is out of range\n", mid);
	else
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

	while ((array[h] != array[l]) && (value >= array[l]) && (value <= array[h]))
	{
		if (array[mid] < value)
			l = mid + 1;
		else if (value < array[mid])
			h = mid - 1;
		else
			return (mid);
		mid = l + ((value - array[l]) * (h - l) / (array[h] - array[l]));
		if ((size_t)mid >= size)
			printf("Value checked array[%d] is out of range\n", mid);
		else
			printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
	}
	if (value == array[l])
		return (l);
	return (-1);
}
