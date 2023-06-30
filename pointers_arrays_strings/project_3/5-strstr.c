#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: research
 * @needle: target substring to serach
 * Return: pointer to index
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j, k;
	char *ptr_haystack = haystack;
	char *ptr_needle = needle;

	if (ptr_needle[0] == '\0')
		return (ptr_haystack);

	while (*(ptr_haystack + i) != '\0')
	{
		if (*(ptr_haystack + i) == (ptr_needle[0]))
		{
			k = i, j = 0;
			while (*(ptr_needle + j) != '\0')
			{
				if (*(ptr_haystack + k) == (*(ptr_needle + j)))
					k++, j++;
				else
					break;
			}
			if (*(ptr_needle + j) == '\0')
			{
				return (ptr_haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
