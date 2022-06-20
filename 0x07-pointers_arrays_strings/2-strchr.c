#include "main.h"
#include <stdio.h>

/**
 * _strchr - this checks for the occurence of a char in a string
 *  @s: main string
 *  @c: search char
 *  Return: a char
 */
char *_strchr(char *s, char c)
{
	int i;

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
