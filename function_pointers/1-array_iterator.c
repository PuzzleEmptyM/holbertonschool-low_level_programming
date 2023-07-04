#include "function_pointers.h"

/**
 * array_iterator - executes function as a parameter
 * on each element of an array
 * 
 * @array: structure to be looped through
 * @size: size of the array
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
		while (size--)
			action(*(array++));
}
