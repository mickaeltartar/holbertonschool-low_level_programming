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
	int num, sum = 0;
	char *ptr;

	for (num = 1; num < argc; num++)
	{
		ptr = argv[num];
		while (*ptr != '\0')
		{
			if (*ptr < '0' || *ptr < '9')
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
