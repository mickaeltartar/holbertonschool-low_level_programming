#include "main.h"

/**
 * _isupper - check if c is uppercase or not)
 * @c: the caracter c
 * Return: 1 is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
		return (1);

	else
		return (0);
}

