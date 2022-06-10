#include "main.h"

/**
* print_square - prints square of n size
* @n: size of square
*
* Return: void.
*/
void print_square(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	b = 0;
	while (b < n)
	{
		a = 0;
		while (a < n)
		{
			_putchar('#');
			_putchar('\n');
			a++;
		}
		b++;
	}
}
