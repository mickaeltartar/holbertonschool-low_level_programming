#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y .
 * @x: number to be raised .
 * @y: THE POWEEEEEEEEEEEER
 *
 * Return: the value of x raised to the power of x .
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 0)
		return (0);
	else if (x == 1 || y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
