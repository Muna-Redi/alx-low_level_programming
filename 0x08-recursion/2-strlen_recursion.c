#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - gives the lenght of a string.
 * @s: the string pointer
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	unsigned int i = 0;
	int a = 0;

	if (s[a] != '\0')
	{
		i++;
		_strlen_recursion(&s[a + 1]);
	}
	else if (s[i] == '\0')
		i += 0;
	return (i);
}
