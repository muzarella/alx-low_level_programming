#include "main.h"
/**
 *	times_table - Prints the nine times table starting from 0.
 *	Return: void
 */

void times_table(void)
{
		int a, b, c;

		for (a = 0; a <= 9; a++)
		{
			_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			c = a * b;
			_putchar(',');
			_putchar(' ');
		if (c <= 9)
		{
			_putchar(' ');
			_putchar(c + '0');
		}
		else
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		}
		_putchar('\n');
		}
}




