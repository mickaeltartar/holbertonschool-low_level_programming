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
printf("Size of Char Data Types in C = %2d bytes \n", sizeof(char));
printf("Size of Int Data Types in C = %2d bytes \n", sizeof(int));
printf("Size of Long Int Data Types in C = %2d bytes \n", sizeof(long int));
printf("Size of Long Double Data Types in C = %2d bytes \n", sizeof(double));
printf("Size of Float Data Types in C = %2d bytes \n", sizeof(float));
return (0);
}
