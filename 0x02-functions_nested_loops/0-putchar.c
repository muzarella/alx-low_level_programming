#include <stdio.h>
#include "main.h"
/**
 *	main - Entry point.
 *	Return: Always 0 (Success)
 */
int main(void)
{
		char put[] = "_putchar";
		int i;

		for (i = 0; i < 8 ; i++)
		{
			putchar(put[i]);
		}
		putchar('\n');
		return (0);
}
