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
	int *b;

	b = &n;
	i = 0;
	while (i <= *b)
	{
		printf("%d, ", a[i]);
		if (i == *b)
			printf("%d\n", a[i]);
		i++;
	}

}
