#include "main.h"

/**
 * get_bit - function that print sets the value of a bit to 1 at a given index
 * @n: number base
 * @index: index to get
 * Return: -1 if error of index otherwise print the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	return ((n >> index) & 1);
}
