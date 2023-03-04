#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer to the beginning of a substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n, *p;

		for (h = haystack; *h != '\0'; h++)
		{
			for (n = needle, p = h; *n != '\0' && *n == *p;)
			{
				n++;
				p++;
			}

			if (*n == '\0')
			{
				return (h);
			}
		}
		return (0);
}
