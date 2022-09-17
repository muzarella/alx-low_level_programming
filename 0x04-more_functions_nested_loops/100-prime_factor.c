#include <stdio.h>
#include <math.h>
/**
 * main - the largest prime factor of the number 612852475143.
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
		long a, larg;
		long num = 612852475143;
		double square = sqrt(num);
		
		for (a = 1; a <= square; a++)
		{
		if (num % a == 0)
		{
			larg = num / a;
		}
		}
		printf("%ld\n", larg);
		return (0);
}
