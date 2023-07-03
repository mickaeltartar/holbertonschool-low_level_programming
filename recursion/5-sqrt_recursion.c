#include "main.h"

/**
 * find_root - root of n
 * @n: square root
 * @root: root
 *
 */

int find_root(int n, int root)
{
	if (root * root == n)
		return (root);

	if (root <= 0)
		return (-1);

	return (find_root(n, root - 1));
}

/**
 * _sqrt_recursion - find natural square root
 * @n: square root
 * Return: the result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (find_root(n, n / 2));
}
