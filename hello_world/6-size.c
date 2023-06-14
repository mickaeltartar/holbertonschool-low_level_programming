#include <stdio.h>

/**
 * main - Print the size of various types
 *
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("size of a float: %zu bytes(s)\n", sizeof(float));
	return(0);
}