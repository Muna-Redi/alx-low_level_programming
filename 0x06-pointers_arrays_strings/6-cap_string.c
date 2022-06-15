#include "main.h"

/**
 * cap_string - capitalises all words of a string
 * @c: pointer to a string
 *
 * Return: char
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 32 && c[i] <= 47) || (c[i] >= 58 && c[i] <= 64))
		{
			if (c[i + 1] >= 97 && c[i] <= 122)
			{
				c[i + 1] -= 32;
			}
		}
		else if (c[i] >= 9 && c[i] <= 11)
			c[i + 1] -= 32;
		else if (c[i] >= 123 && c[i] <= 125)
			c[i + 1] -= 32;
	}
	return (c);
}
