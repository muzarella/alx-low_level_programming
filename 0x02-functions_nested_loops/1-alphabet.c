#include <stdio.h>
#include "main.h"
/**
 *	main - Entry point.
 *
 * 	Desc:declartions for all function
 *
 *	Return: void
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
