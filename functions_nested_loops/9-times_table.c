#include "main.h"

/**
 * times_table - print 9 time tables
 */

void times_table(void)
{

	int row;
	int column;
	int mul;


	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			mul = (row * column);

			if (column == 0)
			{
				_putchar('0' + mul);
			}
			else if (mul <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mul);
			}
			else if (mul > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (mul / 10));
				_putchar('0' + (mul % 10));
			}
		}
		_putchar('\n');
	}
}
