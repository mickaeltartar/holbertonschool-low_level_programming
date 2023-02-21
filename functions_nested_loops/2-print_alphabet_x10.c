#include "main.h"

/**
 * print_alphabet_x10 - write alphabet X10
 *
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
	char az;
	int a = 0;

	while (a < 10)
	{

	for (az = 'a' ; az <= 'z' ; az++)

	_putchar(az);
	a++;
	_putchar('\n');
	}
}
