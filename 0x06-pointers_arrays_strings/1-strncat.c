#include "main.h"
#include <string.h>
/**
 * _strncat -  function that concatenates two strings.
 * @src: array pointer of string
 * @dest: array pointer of string.
 * @n: nth byte from src.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
		int i = 0;
		int j = 0;
		
		while (dest[i] != '\0')
			i++;
		while (src[j] != '\0' && n != j)
		{
			*(dest + i) = src[j];
			j++;
			i++;
		}
		*(dest + i) = '\0';
		return (dest);
}
