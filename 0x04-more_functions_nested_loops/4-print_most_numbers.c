#include "main.h"
#include <stdio.h>
/**
 * Print_numbers - Print most numbers between 0 to 9.
 * Return void
 */
void print_numbers(void)
{
		int i;
		for (i = 0; i < 10; i++)
		{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		}
		_putchar('\n');
}