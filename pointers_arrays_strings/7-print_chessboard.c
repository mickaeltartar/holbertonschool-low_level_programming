#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */

void print_chessboard(char (*a)[8])
{
	int index, index0;

	for (index = 0; a[index][7]; index++)
	{
		for (index0 = 0; index0 < 8; index0++)
			_putchar(*(*(a + index) + index0));

		_putchar('\n');
	}
}
