#ifndef LIST_H_
#define LIST_H_

/****** libraries ******/
#include <stddef.h>
#include <stdio.h>
/****** structure ******/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/****** prototypes ******/

size_t print_list(const list_t *h);

#endif
