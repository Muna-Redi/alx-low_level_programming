#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: innitial string
 * @s2: string to be added
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k = 0;

	j = strlen(s1) + strlen(s2);
	ptr = malloc((j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (s1 == NULL)
		ptr[0] = '\0';
	else if (s2 == NULL)
		ptr[j] = '\0';
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		ptr[i] = s2[k];
		i++;
		k++;
	}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}
