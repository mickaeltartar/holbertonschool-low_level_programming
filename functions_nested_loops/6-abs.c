#include "main.h"

/**
 * _abs - compute absolute value of an integer
 *
 * @n: the int
 *
 * Return: n if positive otherwise -n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);

	else 
		return (n);
}
