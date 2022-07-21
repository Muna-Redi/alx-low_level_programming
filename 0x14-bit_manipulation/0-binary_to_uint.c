#include "main.h"

/**
 * binary_to_uint - converts a string of binary characters
 * to unsigned decimal int
 * @b: binary string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, power = 1, len = 0;

	if (b == NULL)
		return (0);
	for (; b[len] != '\0'; len++)
		;
	len--;
	while (len >= 0)
	{
		if ((b[len] != '0') &&( b[len] != '1'))
			return (0);
		if (b[len] == '1')
			uint = (uint + power) + '0';
		power *= 2;
		len--;
	}
	return (uint);
}
