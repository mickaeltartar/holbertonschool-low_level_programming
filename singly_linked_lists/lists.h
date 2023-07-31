#ifndef LIST_H_
#define LIST_H_

/****** libraries ******/
#include <stddef.h>
#include <stdio.h>
/****** structure ******/

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/****** prototypes ******/

size_t print_list(const list_t *h);

#endif
