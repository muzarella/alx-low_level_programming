#include "main.h"
#include <stdio.h>
/**
 * _Print_numbers- Print numbers between 0 to 9.
 * Return 1 (Sucess) OR 0 (Failure)
 */
void print_numbers(void)
{
		int i;
		for (i = 0; i < 10; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
}
