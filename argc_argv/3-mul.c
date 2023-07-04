#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie two int
 * @argc: argument count
 * @argv: argument value
 * Return: 1 if error otherwise 0
 */

int main(int argc, char *argv[])
{
	int i;
	int result;

	i = 1;
	result = 1;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	while (i < argc)
	{
		result *= atoi(argv[i]);
		i++;
	}

	printf("%d\n", result);
	return (0);
}
