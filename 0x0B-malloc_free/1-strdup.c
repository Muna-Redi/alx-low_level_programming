#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - this returns a pointer to the duplicate of string str
 * @str: string of char
 * Return: ponter to the duplicate string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	i = 0;
	len = strlen(str);
	ptr = malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
	{
		ptr[i] = *(str + i);
	}
	ptr[i] = '\0';
	if (str[0] == '\0')
		return ('\0');
	return (ptr);
	free(ptr);
}
