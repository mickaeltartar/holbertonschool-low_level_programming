#include "main.h"

/**
 * main - print argument receive
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
			i++;
	}
	return (0);
}
