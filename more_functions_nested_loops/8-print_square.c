#include "main.h"

/**
 * print_square - draw a square in the terminal
 * @size: the size
 */

void print_square(int size)
{
	int row = 0;
	int column;

	if (size > 0)
	{

		while (row < size)
		{
			column = 0;
			while (column < size)
			{
				_putchar('#');
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
