#include <stdio.h>

/**
 * main - Print the program name.
 * @argc: command unused.
 * @argv: An array of pointer to the arguments.
 *
 * Return: Return (0).
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	char *ptr = argv[0];

	printf("%s\n", ptr);

	return (0);
}
