#include "main.h"

/**
 * _strlen_recursion - lenght of the string
 * @s: the string
 * Return: return lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
