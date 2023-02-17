#include <stdio.h>

/**
 *main - fonction principal void = zero argument
 *sizeof - size of file in octet
 *
 *Return: always 0
 */

int main(void)
{
printf("Size of a char: %2dbyte(s)\n", sizeof(char));
printf("Size of an int: %2dbyte(s)\n", sizeof(int));
printf("Size of a long int: %2dbyte(s)\n", sizeof(long int));
printf("Size of a long long: %2dbyte(s)\n", sizeof(long long int));
printf("Size of a float: %2dbyte(s)\n", sizeof(float));
return (0);
}
