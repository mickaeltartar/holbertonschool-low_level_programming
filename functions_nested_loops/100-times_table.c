#include "main.h"

/**
 * print_times_table - print 9 table starting with 0
 * @n: the number
 */

void print_times_table(int n)
{
	int row, column, multi;

	if (n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				multi = (row * column);

				if (column == 0)
					_putchar('0' + multi);
				else if (multi <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + multi);
				}
				else if (multi <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(multi / 10 + '0');
					_putchar(multi % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multi / 100) + '0');
					_putchar(((multi % 100) / 10) + '0');
					_putchar(((multi % 100) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
