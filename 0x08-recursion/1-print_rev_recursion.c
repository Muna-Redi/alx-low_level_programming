#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string pointer
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int x = 0, len = 0;

	int _strlen_recursion(char *s);
	len = _strlen_recursion(s);
	if (len >= x)
	{
		_putchar(*(s + len));
		_print_rev_recursion((s + (--len)));
	}
	else
		return;
}
/**
 * _strlen_recursion - gets sring lengh
 * @s: pointer to string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	else if (*(s + 1) == '\0')
		i += 0;
	return (i);
}
