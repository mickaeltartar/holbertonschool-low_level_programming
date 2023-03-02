#include "main.h"

/**
 * leet - encode string into 1337 leet
 * @p: string
 * Return: string
 */

char *leet(char *p)
{
	int letter[11] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	int num[11] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	int index, b;

		for (index = 0; p[index] != '\0'; index++)
		{
			for (b = 0; letter[b] != '\0'; b++)
			{
				if (p[index] == letter[b])
					p[index] = num[b];
			}
		}
		return (p);
}

