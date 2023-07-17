#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_

/****** libraries ******/
#include <stdio.h>
#include <stddef.h>

/****** prototypes ******/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
