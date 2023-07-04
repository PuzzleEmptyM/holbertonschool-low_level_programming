#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * 
 * @n: number of parameters passed in the function
 * @...: variable number of parameters to calculate sum
 * 
 * Return: If n == 0, 0
 * Otherwise, sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
