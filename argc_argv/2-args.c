#include <stdio.h>
#include "main.h"

/**
 * main - program that prints al arguments it receives
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
