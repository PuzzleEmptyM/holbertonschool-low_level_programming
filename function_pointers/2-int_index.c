#include "function_pointers.h"

/**
 * int_index - Search for an integer.
 * 
 * @array: Pointer to array
 * @size: Array's size
 * @cmp: Pointer to function
 * 
 * Return: The index of searched integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
