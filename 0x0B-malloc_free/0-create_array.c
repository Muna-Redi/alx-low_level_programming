#include "main.h"
#include <stdlib.h>

/**
 * create_array - This creates an array of chars initialized
 * with a specific char
 * @size: lenght of array
 * @c: initialized char
 * Return: ponter to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i, j = 1;

	j = size;
	i = 0;
	ptr = malloc(size * sizeof(char));
	while (i < j)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	if (size == 0)
		return ('\0');
	return (ptr);
}
