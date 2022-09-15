#include "main.h"

/**
 * _isdigit - Check for a digit (0-9)
 * @c: input to test degit
 * Return: 1 OR 0
 */
int _isdigit(int c)
{
		if (c >= 48 && c <= 57)
			return (1);
		return (0);
}
