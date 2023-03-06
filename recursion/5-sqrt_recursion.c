#include "main.h"

/**
* helper - helperfunction to find sqrt
* @num: num to be square rooted
* @root: root number
*
* Return: squareroot of number
*/

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root
 * @n: n
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
