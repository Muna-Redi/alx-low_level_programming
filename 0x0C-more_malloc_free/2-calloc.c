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
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb + 1 * (size));
	if (!ptr)
		return (NULL);
	while (nmemb > 0)
	{
		ptr[i] = 0;
		i++;
		nmemb--;
	}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}
