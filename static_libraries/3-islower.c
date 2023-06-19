#include "main.h"
#include <stdio.h>

/**
 * _islower - function that checks for lower case characters
 * @c: the input character to check
 * Return: int.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
