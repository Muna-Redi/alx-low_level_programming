#include <stdio.h>

/**
* main - Entry point of code
*
* Description: This program print double digit number combinations
*
* Return: Always return an int 0 (Success)
*/

int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		y = x + 1;
		for (y = 48; y < 58; y++)
		{
			putchar(x);
			putchar(y);

			if (x < 56 || y < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
