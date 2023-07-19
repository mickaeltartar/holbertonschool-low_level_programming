#include "variadic_functions.h"

/**
 * sum_them_all - return sum when given unknow amount of arguments
 * @n: int to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(valist, n);

	while (i < n)
	{
		sum += va_arg(valist, int);
		i++;
	}
	va_end(valist);

	return (sum);
}
