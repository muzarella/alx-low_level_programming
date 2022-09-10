#include <stdio.h>
/**
 *	main - Print all single digit numbers
 *	Return: Always 0 (Success)
 */
int main(void)
{
		int base;

		for (base = 0; base < 10; base++)
			printf("%i", base);
		putchar('\n');
		return (0);
}

