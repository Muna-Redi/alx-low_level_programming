#include "main.h"

/**
 * _strchr - this checks for the occurence of a char in a string
 *  @s: main string
 *  @c: search char
 *  Return: a char
 */
char *_strchr(char *s, char c)
{
	int i;
	char *d;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == '\0')
		return ('\0');
	else if (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			d[i] = s[i];
			i++;
		}
		return (d);
	}
}
