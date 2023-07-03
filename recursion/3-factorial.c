#include "main.h"

/**
 * factorial - the factorial of a given number
 * @n: the number
 * Return: -1 if negatif, n if factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
		return (n * factorial(n - 1));
}
