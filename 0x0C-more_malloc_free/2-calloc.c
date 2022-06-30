#include "main.h"
#include <stdlib.h>

/**
 * _calloc - This creates an array of chars initialized
 * with a specific char
 * @nmemb: lenght of array
 * @size: size of data type
 * Return: ponter to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i, j = 1;

	j = nmemb;
	if (nmemb == 0 || size == 0)
		return (NULL);
	i = 0;
	ptr = malloc((nmemb + 1) * size);
	if (ptr == NULL)
		return (NULL);
	while (i < j)
	{
		ptr[i] = '0';
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}
