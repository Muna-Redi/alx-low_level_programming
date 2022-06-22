#include "main.h"

/**
 * _puts_recursion - this prints a string with a new line.
 * @s: the string pointer
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0, j = 0;

	if (s[i] == '\0' && s[i] == s[j])
		return;
	_putchar(s[j]);
	i++;
	if (s[j] == '\0')
		return;
	_puts_recursion(&s[j + 1]);
	_putchar('\n');
}
