#include "main.h"

/**
 * malloc_checked - allacate memory with malloc
 * @b: size to malloc
 * Return: pointer to allocate memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
