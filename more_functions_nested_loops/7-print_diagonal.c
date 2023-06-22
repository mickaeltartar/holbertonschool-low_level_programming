#include "main.h"

/**
 *
 *
 *
 */

void print_diagonal(int n)
{
	int row = 0;
	int column;

	if (n > 0)
	{

		while (row < n)
		{
			column = 0;
			while (column < row)
			{
				_putchar(' ');
				column++;
			}
			_putchar(92);
			_putchar('\n');
			row++;
		}
	}
	_putchar('\n');
}
