#ifndef MAIN_H_
#define MAIN_H_

/****** libraries ******/
#include <stdio.h>


/****** prototypes ******/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);

#endif