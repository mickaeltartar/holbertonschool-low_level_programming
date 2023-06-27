#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: src of the copy
 * @n: bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;
	int i = 0;

	while (*(src_ptr + i) != '\0' && i < n)
	{
		*(dest_ptr + i) = *(src_ptr + i);
		i++;
	}
	

	while (i < n)
	{
		*(dest_ptr + i) = '\0';
		i++;
	}
	return (dest);
}
