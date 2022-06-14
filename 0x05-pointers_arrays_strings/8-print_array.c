#include <stdio.h>
#include "main.h"

/**
 * print_array - this prints n elements of an array
 * @a: an array of numbers
 * @n: integer value of number of elements to be
 * printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	int b;

	b = 1;
	i = 0;
	if (n > 0)
	{
		while (b <= n)
		{
			printf("%d, ", a[i]);
			if (b == n)
			{
				printf("%d\n", a[i]);
			}
			i++;
			b++;
		}
	}
	else
		n = 0;


}
