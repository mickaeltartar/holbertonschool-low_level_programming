#include "main.h"

/**
 * _memset - memory with constant value
 * @s: pointer to memory
 * @b: the constant value
 * @n: The number of byte to fill at memset
 * Return: the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;
	int i;
	char *str_ptr = s;

		if (size > 0)
		{
			for (i = 0; i < size; i++)
				(*(str_ptr + i) = b);
		}
		return (str_ptr);
}
