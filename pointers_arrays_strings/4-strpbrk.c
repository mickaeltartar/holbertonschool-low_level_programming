#include "main.h"

/**
 * _strpbrk - searshes a strng for any of a set of bytes
 * @s: researsh
 * @accept: target match
 * Return: pointer to index
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;
	char *str_ptr = s;
	char *ptr_accept = accept;

	while (*(str_ptr + a) != '\0')
	{
		b = 0;
		while (*(ptr_accept + b) != '\0')
		{
			if (*(str_ptr + a) == (*(ptr_accept + b)))
			{
				str_ptr = (str_ptr + a);
				return (str_ptr);
			}
			b++;
		}
		a++;
	}
	return (NULL);
}
