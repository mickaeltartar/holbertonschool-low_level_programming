#include "main.h"

/**
 * print_sign - print '+' '-' and '0'
 *
 * @n: the sign
 *
 * Return: 1 if positif -1 if negatif otherwise
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

