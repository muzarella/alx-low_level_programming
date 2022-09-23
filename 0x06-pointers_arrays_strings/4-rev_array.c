#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @temp: temporary holds value  of array.
 * @n: The number of elements in array.
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
		int i;
		int temp;
		
		i = 0;
		while (i < n)
		{
			n--;
			temp = a[i];
			a[i] = a[n];
			a[n] = temp;
			i++;
		}
}
