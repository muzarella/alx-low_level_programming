#include "main.h"
#include <stdio.h>
/**
 * _puts - Print a string folllowed by a new line.
 * @str: String to be printed.
 * Return: Nothing
 */
void _puts(char *str)
{
		int i;
		
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
