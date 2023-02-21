#include "main.h"

/**
 * _islower - check c
 *
 * @c: caractere
 *
 * Return: Always 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
