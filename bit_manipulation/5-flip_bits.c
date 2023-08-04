#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number
 * @m: number
 * Return: numbers of bits that n have to change for the equal too m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, count;

	for (count = index = 0; index < 64; index++, count++)
		if (((n >> index) & 1) == ((m >> index) & 1))
			count--;

	return (count);
}
