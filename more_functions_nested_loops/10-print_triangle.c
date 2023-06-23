#include "main.h"

/**
 * print_triangle - draw a traingle in the terminal
 * @size: size of the triangle
 */

void print_triangle(int size)
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
				if (column >= size - row - 1)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
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
