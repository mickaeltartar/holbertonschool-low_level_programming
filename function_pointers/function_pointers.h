#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_

/****** libraries ******/
#include <stdio.h>

/****** prototypes ******/
void print_name(char *name, void (*f)(char *));

#endif
