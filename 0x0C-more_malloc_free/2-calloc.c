#include "main.h"
#include <stdlib.h>

/**
 * _calloc - This creates an array of  initialized
 * to 0
 * @nmemb: lenght of array
 * @size: size of data type
 * Return: ponter to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	i = 0;
	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb + 1 * (size));
	if (!ptr)
		return (NULL);
	nmemb *= size;
	while (nmemb > 0)
	{
		((char *)ptr)[i] = 0;
		i++;
		nmemb--;
	}
	return (ptr);
}
