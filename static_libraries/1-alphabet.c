#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
