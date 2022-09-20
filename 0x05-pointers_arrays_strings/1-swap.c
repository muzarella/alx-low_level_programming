#include "main.h"
/**
 * swap_int - swap two integer
 * @a: first number.
 * @b: second number.
 * Return nothing
 */
void swap_int(int *a, int *b)
{
		int swap = *a;
		
		*a = *b;
		*b = swap;
}
