#include "main.h"

/**
 * _pow_recursion - gives the value of an int
 * raised to the pwer of another
 * @x: base int
 * @y: exponent
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
