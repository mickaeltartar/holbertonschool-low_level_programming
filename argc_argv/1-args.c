#include <stdio.h>

/**
 * main - Print the program name.
 * @argc: command unused.
 * @argv: An array of pointer to the arguments.
 *
 * Return: Return (0).
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
