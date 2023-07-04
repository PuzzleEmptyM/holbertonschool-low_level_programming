#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate basic operation between two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 succes
 */

int main(int argc, char *argv[])
{
	int result, a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);

	result = f(a, b);

	printf("%d\n", result);
	return (0);
}
