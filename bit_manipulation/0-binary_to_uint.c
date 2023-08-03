#include "main.h"

/**
 * binary_to_unit - convert a binary number to a unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number
 */


unsigned int binary_to_uint(const char *b)
{
	int index, multiplier;
	unsigned int number;

	if (!b)
		return (0);

	for (index = number = 0; b[index] != 0; index++)
		if (b[index] != 48 && b[index] != 49)
			return (number);

	for (index -= 1, multiplier = 0; index >= 0; index--, multiplier++)
	{
		if (b[index] == 48)
			continue;

		number += 1 << multiplier;
	}

	return (number);
}
