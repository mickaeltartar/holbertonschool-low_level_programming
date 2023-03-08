#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks if a given char is number or not
 * Return: 1 or 0
 * @argc: argument counter
 * @argv: argumet mult
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;
	char *ptr;

	for (num = 1; num < argc; num++)
	{
		ptr = argv[num];
		for (digit = 0; *(ptr + digit); digit++)
		{
			if (*(ptr + digit) < '0' || *(ptr + digit) > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(ptr);
	}
	printf("%d\n", sum);
	return (0);
}
