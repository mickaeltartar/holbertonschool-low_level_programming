#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: 2D array
 */

void print_chessboard(char (*a)[8])
{
	int row = 0;
	int column;

	while (row < 8)
	{
		column = 0;
		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		row++;
		_putchar('\n');
	}
}
