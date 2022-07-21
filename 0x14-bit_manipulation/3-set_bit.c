#include "main.h"

/**
* set_bit - sets the bit at an index to zero
* @n: number
* @indext: index to chnge
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int limit = 0x01;

	limit <<= index;
	if (limit == 0)
		return (-1);
	*n |= limit;
	return (1);
}
