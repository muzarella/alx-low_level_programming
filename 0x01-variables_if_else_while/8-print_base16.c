#include <stdio.h>
/**
 * 	main - Print base
 *	Return: Always 0 (Success)
 */
int main(void)
{
		char hexa;

		for (hexa = '0'; hexa <= '9'; hexa++)
			putchar(hexa);
		Ifor (hexa = 'a'; hexa <= 'f'; hexa++)
			putchar(hexa);
		putchar('\n');
		return (0);
}
