#include "main.h"

/**
 *
 *
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		str++;
		_putchar(*str);
	}
	_putchar('\n');
}

