#include "main.h"

/**
 * print_line - draw a straight line
 * @n: the '_'
 */

void print_line(int n)
{
	int start = 0;

	if (n > 0)
		while (start < n)
		{
			_putchar('_');
			start++;
		}
	_putchar('\n');
}
