
#include "main.h"

/**
* print_times_table - prints the times table
*
* @n: an integer that reps the number of times of
* multiplication
*
* Description:Function that  prints the times table
*
* Return: void
*/
void print_times_table(int n)
{
	int lines;
	int vert;
	int times;

	if (n >= 0 && n < 15)
	{
		for (lines = 0; lines <= n; lines++)
		{
			for (vert = 0; vert <= n; vert++)
			{
				times = lines * vert;

				if (vert == 0)
					_putchar('0');
				else if (times < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(times % 10 + '0');
				}
				else if (times >= 10 && times < 100)
			{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((times / 10) % 10 + '0');
					_putchar(times % 10 + '0');
				}
				else if (times > 99 && times < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(times / 100 + '0');
					_putchar((times / 10) % 10 + '0');
					_putchar(times % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}

