#include <stdio.h>

/**
 *main - fonction principal void = zero argument
 *
 *Return: always 0
 */

int main(void)
{
char charType;
int integerType;
long longType;
double doubleType;
float floatType;
printf("Size of a char: %2d byte(s) \n", sizeof(char));
printf("Size of an int: %2d byte(s) \n", sizeof(int));
printf("Size of a long int: %2d byte(s) \n", sizeof(long int));
printf("Size of a long long: %2d byte(s) \n", sizeof(long long int));
printf("Size of a float: %2d byte(s) \n", sizeof(float));
return (0);
}
