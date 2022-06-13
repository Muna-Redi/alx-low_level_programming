#include "main.h"

/**
 * rev_string - this reverses a string
 * @s: pointer to a string
 *
 * Return: is void.
 */
void rev_string(char *s)
{
	int n, i, p, r;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	i = n / 2;
	r = n - 1;
	p = r;
	while (p >= 0)
	{
		s[r - p] = s[p];
		if (p == i)
		{
			s[p] = s[r - p];
		}
		p--;
	}
}

