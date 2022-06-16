#include <stdio.h>
#include "main.h"
#include <time.h>

/**
 * print_number - this prints  an integer
 * @n: is a string
 *
 * Return: returnsis void
 */
void print_number(int n)
{

	int i, a;
	int r = 0;
	int sign = -1;
	int b = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == '-')
			sign = sign * -1;
		if (n[i] >= '0' && n[i] <= '9')
		{
			r = r * 10;
			r -= (n[i] - '0');
			b = 1;
		}
		else if (b == 1)
			break;
	}
	r = sign * r;
	a = 0;
	while (r[a] != '\0')
	{
		_putchar(r[a]);
		a++;
	}
}

