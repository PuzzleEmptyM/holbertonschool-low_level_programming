#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of the two integers.
 *
 * @a: pointer to an int
 * @b: pointer to the other int
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
