#include <stdio.h>

/**
 *	main - Entry point
 *
 *	Return: Always 0 (Success)
 */
int main(void)
{
		int sizeInt;
		long sizeLong;
		long long int sizeLongInt;
		char sizeChar;
		float sizeFloat;

		printf("Size of a char: %lu byte(s)\n", sizeof(sizeChar));
		printf("Size of an int: %lu byte(s)\n", sizeof(sizeInt));
		printf("Size of a long int: %lu byte(s)\n", sizeof(sizeLong));
		printf("Size of a long long int: %lu byte(s)\n", sizeof(sizeLongInt));
		printf("Size of a float: %lu byte(s)\n", sizeof(sizeFloat));
		return (0);
}
