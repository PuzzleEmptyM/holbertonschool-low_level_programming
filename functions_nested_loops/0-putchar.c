#include "main.h"
#include <stdio.h>

/**
 * main - Calls the function putchar to print with
 *
 * Return: 0
 */
int main(void)
{
	char a[] = "_putchar";
	int s = sizeof(a);
	int b;

	for (b = 0); b < (s - 1); b++
	{
		_putchar(a[b]);
	}
	_putchar('\n');
	return (0);
}
