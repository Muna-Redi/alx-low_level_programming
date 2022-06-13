#include "main.h"

/**
 * rev_string - this reverses a string
 * @s: pointer to a string
 *
 * Return: is void.
 */
void rev_string(char *s)
{
	int n;
	int p;
	int x;
	int r;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	r = n;
	p = r;
	x = p / 2;

	if (p % 2 == 0)
	{
		while (x < p)
		{
			_putchar(s[x]);
			x++;
		}
	}
	else if (p % 2 != 0)
	{
		x = ((p - 1) / 2);
		while (x < (p - 1))
		{
			_putchar(s[x]);
			x++;
		}
	}
}
