#include "main.h"
#include <stdio.h>
/**
 * Print_numbers - Print line char nth times.
 * @n: input nth num.
 * Return void
 */
void print_line(int n)
{
		int i;
		
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
		}
}
