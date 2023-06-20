#include "main.h"

/**
 * _isalpha - check if c is lower or uppercase
 *
 * Return 1 if c is upper or lowercase
 * otherwise return 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
