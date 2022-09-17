#include "main.h"
#include <stdio.h>
/**
 * Print_numbers- Print numbers between 0 to 14 in 10 times.Return 1 (Sucess) OR 0 (Failure)
 */
void more_numbers(void)
{
		int a, b;
		
		for (a = 0; a < 11; a++)
		{
		for (b = 0; b <= 14; b++)
		{
		if (b > 9)
		{
			putchar((b / 10) + '0');
		}
		putchar((b % 10) + '0');
		}
		putchar('\n');
		}
}
