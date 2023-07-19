#include "variadic_functions.h"

/**
 * print_strings - print some strings
 * @separator: delimiter
 * @n: amount of argument in list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *s;

	{
		va_start(valist, n);

		while (i < n)
		{
			s = va_arg(valist, char *);
			i++;

			if (s == NULL)
				printf("(nil)");

			else
				printf("%s", s);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
}

