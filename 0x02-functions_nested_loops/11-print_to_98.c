#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
*
* Description: This funtion prints from entered number n to 98
* @n: is an int
*
* Return: will return nothing
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
}

