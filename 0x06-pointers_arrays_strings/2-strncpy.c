#include "main.h"
/**
 * _strncpy - string to be copied up to nth-bytes
 * @dest: Destination string; src string is copied to it
 * @src: content to be copied.
 * @n: Number of bytes of src that should be copied to dest.
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
		int i = 0;
		
		while (src[i] != '\0' && i < n)
		{
			*(dest + i) = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
		return (dest);
}
