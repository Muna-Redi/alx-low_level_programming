#include "main.h"
#include <stdio.h>

/**
 * _strlen - gives the lenght of a string.
 * @str: the string pointer
 *
 * Return: char
 */
int _strlen_recursion(char *s)
{
	unsigned int i = 0;
	int a = 0;

	if (str[a] != '\0')
	{
		i++;
		_strlen(&str[a + 1]);
	}
	else if (str[i] == '\0')
		i += 0;
	return (i);
}
