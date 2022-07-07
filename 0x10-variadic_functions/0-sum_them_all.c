#include "variadic_functions.h"

/** sum_them_all - this functions sums up its args
 * @n: number of args
 * Return: returns an int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum;
	
	sum = 0;
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
