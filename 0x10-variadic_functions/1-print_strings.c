#include "variadic_functions.h"

/**
 * print_strings - prints strings to stdout
 * @seperator: seperating string
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	int j;
	char *doc;

	va_start(str, n);
	for (j = 0; j < n; j++)
	{
		doc = va_arg(str, char *);
		if (doc == NULL)
			printf("nil");
		else
			printf("%s", doc);
		if (separator!= NULL && j < (n - 1))
			printf("%s", separator);
	}
	va_end(str);
	putchar('\n');

}
