#include"main.h"

/**
 * times_table - impreime les 9 tables, départ à 0.
 */

void times_table(void)
	{
	int num, mult, calc;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			calc = num * mult;

			if (calc <= 9)
				_putchar(' ');
			else
				_putchar((calc / 10) + '0');

			_putchar((calc % 10) + '0');
		}
		_putchar('\n');
	}
}
