#include "main.h"
#include <stdio.h>

/** print_sign - gives the sign of a passed number
 * @n: number to be compared
 *
 * Return: Returns three values based on n
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(43);
		return (0);
	}

	return (0);
}
