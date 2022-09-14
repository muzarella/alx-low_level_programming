#include <stdio.h>
#include "main.h"
/**
 *	File - Print alphabet Entry point.
 *
 *	Desc: void
 */

void print_alphabet_x10(void)
{
		char alp;
		int i = 0;

		for (i = 0; i < 10; i++)
		{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		}
}


