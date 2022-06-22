#include "main.h"
#include <stdio.h>

/**
 * _strlen - gives the lenght of a string.
 * @str: the string pointer
 *
 * Return: char
 */
int _strlen(char *str)
{
	static int i;
	int a = 0;

	if (str[a] != '\0')
	{
		i++;
		_strlen(&str[a + 1]);
	}
	else
		return (i);
}
/**
 * _print_rev_recursion - this prints a string in reverse
 * @s: pointer to string.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int x = 0, y = 0;
	int len = 0;

	len = _strlen(s);
	if (len >= x)
	{
		_putchar(s[len]);
		_print_rev_recursion(&s[len - 1]);
	}
	else
		_putchar('\n');
}
