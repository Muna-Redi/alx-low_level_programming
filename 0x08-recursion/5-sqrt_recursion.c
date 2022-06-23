#include "main.h"

/**
 * muldivide - divides with 2, 3,5 7
 * @y: an int
 * Return: int
 */
int muldivide(int y)
{

	if (y % 2 == 0)
		y /= 2;
	else if (y % 3 == 0)
		y /= 3;
	else if (y % 5 == 0)
		y /= 5;
	else if (y % 7 == 0)
		y/= 7;
	return (y);
}
/**
 * _sqrt_recursion - returns the natural square root
 * of a number
 * @n: the number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int i4 = 0, r4 = 1, i5 = 0, r5 = 1, i7 = 0, r7 = 1;
	int root = 0, x, i2 = 0, r2 = 1, i3 = 0, r3 = 1;

	x = n;
	if (x == 1)
	{
		root = r2 * r3 * r5 * r7;
		if (x / root == root)
			root = root;
		else
			root = -1;
	}
	else if (x > 1)
	{
		if (x % 2 == 0)
		{
			i2 += 1;
			if (i2 % 2 != 0)
				r2 *= 2;
		}
		else if (x % 3 == 0)
		{
			i3 += 1;
			if (i3 % 2 != 0)
				r3 *= 3;
		}
		else if (x % 5 == 0)
		{
			i5 += 1;
			if (i5 % 2 != 0)
				r5 *= 5;
		}
		else if (x % 7 == 0)
		{
			i7 += 1;
			if (i7 % 2 != 0)
				r7 *= 7;
		}
	x = muldivide(x);
	_sqrt_recursion(x);
	}
	return (root);
}
