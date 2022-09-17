#include "main.h"
#include <stdio.h>
/**
 * Print_numbers - Print most numbers between 0 to 9.
 * Return 1 (Sucess) OR 0 (Failure)
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
