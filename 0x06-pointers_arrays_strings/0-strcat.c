#include "main.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: the destination string
 * @src: the target string
 *
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
	_putchar('\n');
}
