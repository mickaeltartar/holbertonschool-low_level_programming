#include "main.h"
#include <stdio.h>

/**
 * main - print number of argument entered by user
 * @argc: argument counter
 * @argv: argument value
 * Return: 0
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
