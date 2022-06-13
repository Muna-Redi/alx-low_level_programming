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

	i = 0;
	while (i <= n)
	{
		printf("%d, ", a[i]);
		if (i == n)
			printf("%d\n", a[i]);
		i++;
	}

}
