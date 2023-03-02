#include "main.h"

/**
 * _memset - Fill memory with a constent byte
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: bytes of memory area to fill
 *
 * Return: return the memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
