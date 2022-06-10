#include <stdio.h>
#include "main.h"

/**
* main -  prints numbers 1 t0 100 and fizzbuzz for multiples
* of 3 and 5
*
* Description: prints 1 t0 100 with fizz and buzz for multiples of 3 and 5
*
* Return: 0 is success
*/
int main(void)
{
	int n = 0;

	while (n <= 100)
	{
		if (n % 5 == 0 && n % 3 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
		{
			if (n == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (n % 3 == 0)
			printf("Fizz ");
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}

