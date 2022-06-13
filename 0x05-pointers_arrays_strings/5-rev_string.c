#include "main.h"

/**
 * rev_string - this reverses a string
 * @s: pointer to a string
 *
 * Return: is void.
 */
void rev_string(char *s)
{
	int n, p, r;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	r = n - 1;
	p = r;
	while (p >= 0)
	{
		s[r -p] = s[p];
		p--;
	}
}

