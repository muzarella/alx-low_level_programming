#include <stdio.h>
#include "main.h"
/**
 *	File:	Print alphabet point.
 *
 *	Desc:	Declartions for all function
 */

void print_alphabet(void)
{
		char alp;

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
}
