#include "main.h"

/**
 * _puts_recursion - this prints a string with a new line.
 * @s: the string pointer
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	if (s[j] == s[i])
		return;
	_putchar(s[j]);
	_puts_recursion(&s[j + 1]);
	_putchar('\n');
}
