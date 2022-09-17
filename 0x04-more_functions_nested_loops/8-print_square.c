#include "main.h"
#include <stdio.h>
/**
 * Print_square - Print square line nth times.
 * @size: input nth num.
 * Return void
 */
void print_square(int size)
{
		int i, j;
		
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
		for (i = 0; i < size; i++)
		{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
		}
}
