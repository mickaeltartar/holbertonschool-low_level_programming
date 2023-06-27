#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int lenght = 0;
	char *index = s;

	while (*index != '\0')
	{
		lenght++;
		index++;
	}

	while (lenght > 0)
	{
		index--;
		_putchar(*index);
		lenght--;
	}
	_putchar('\n');
}
