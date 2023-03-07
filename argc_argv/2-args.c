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
	char **arg;

	for (arg = argv; *arg != 0; arg++)
		printf("%s\n", *arg);

	return (0);
}

/**
 * main - Print the program name.
 *
 * with a single pointer
 *
 * int main (int __attribute__((unused)) argc, char *argv[])
 * {
 * char *arg;
 *
 * for (arg = *argv; arg != 0; arg = *(argv++))
 * printf("%s\n", arg);
 *
 * return (0);
 * }
 */
