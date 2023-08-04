#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int originalNum;
	int numBits;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	originalNum = n;
	numBits = 0;
	while (n != 0)
	{
		n = n >> 1;
		numBits++;
	}

	numBits -= 1;

	while (numBits >= 0)
	{
		_putchar(48 + ((originalNum >> numBits) & 1));
		numBits--;
	}
}
