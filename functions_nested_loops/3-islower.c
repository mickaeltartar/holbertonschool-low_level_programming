#include "main.h"

/**
 * _islower - check if c lower case
 *
 * @c: lowercase or uppercase
 *
 * Return: 1 if lowercase otherwise 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);

	else
		return (0);
}
