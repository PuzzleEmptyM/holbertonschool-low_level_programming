#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function that returns natural
 * square root of a number
 *
 * @n: the input number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (getNumSqr(n, 1));
}

/**
 * getNumSgr - funtion that gets the number of sqrt
 *
 * @num: input number
 *
 * @i: counter variable
 *
 * Return: int
 */

int getNumSqr(int num, int i)
{
	if (num == (i * i))
		return (i);
	else if (num > (i * i))
		return (getNumSqr(num, i + 1));
	else
		return (-1);
}
