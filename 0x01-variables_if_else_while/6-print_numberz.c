#include <stdio.h>
/**
 *	main - Print all single digit numbers using only putchar
 *	Return: Always 0 (Success)
 */
int main(void)
{
		int baseTen;

		for (baseTen = 0; baseTen < 10; baseTen++)
			putchar(baseTen + '0');
				putchar('\n');
		return (0);
}

