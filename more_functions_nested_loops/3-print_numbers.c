#include "main.h"

/**
 * print_numbers - print from 0 to 9 with _putchar
 */

void print_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
