#include "main.h"

/**
 * _strlen - this prints the length of a string
 * @s: pointer to a string
 *
 * Return: returns an integer.
 */
int _strlen(char *s)
{
	int i;
	int len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = len;
	if (s[0] == ('\0'))
	{
		len = 0;
	}
	return (len);
}
