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
	s[0] = s[i];
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	if (s[0] == ('\0'))
	{
		len = 0;
	}
	return (len);
}
