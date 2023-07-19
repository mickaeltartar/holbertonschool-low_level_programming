#include "variadic_functions.h"

/**
 * print_numbers - print some amount of numbers
 * @separator: delimiter
 * @n: amount of argument in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;

	{
		va_start(valist, n);
		while (i < n)
		{
			printf("%d", va_arg(valist, int));
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(valist);
	}
	printf("\n");
}
