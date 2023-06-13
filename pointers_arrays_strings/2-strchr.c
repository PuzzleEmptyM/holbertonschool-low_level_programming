#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string in question
 * @c: character tp receive
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (S);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
