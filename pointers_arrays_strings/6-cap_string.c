#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @p: string
 * Return: string
 */

char *cap_string(char *p)
{
	int index;

	for (index = 0; p[index] != '\0'; index++)
	{
		if (p[index] >= 'a' && p[index] <= 'z')
		{
			if (index == 0)
				p[index] -= 32;
			else if (p[index - 1] >= 9 && p[index - 1] <= 10)
				p[index] -= 32;
			else if (p[index - 1] >= 32 && p[index - 1] <= 34)
				p[index] -= 32;
			else if (p[index - 1] >= 40 && p[index - 1] <= 41)
				p[index] -= 32;
			else if (p[index - 1] == 123 || p[index - 1] == 125)
				p[index] -= 32;
			else if (p[index - 1] == 46)
				p[index] -= 32;
			else if (p[index - 1] == 59)
				p[index] -= 32;
			else if (p[index - 1] == 63)
				p[index] -= 32;
			}
	}
	return (p);
}
