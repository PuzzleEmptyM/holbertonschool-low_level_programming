#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int count, num1, num2, res;

	count = num1 = num2 = res = 0;
	if (argc > 0)
	{
		while (count < argc)
		{
			if (argc == 3)
			{
				if (count == 1)
					num1 = atoi(argv[count]);
				else if (count == 2)
					num2 = atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			res = (num1 * num2);
			count++;
		}
		printf("%d\n", res);
	}
	return (0);
}
