#ifndef LISTS_H_
#define LISTS_H_

/****** libraries ******/

#include <stddef.h>
#include <stdio.h>

/****** structure ******/
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: point to the previous node
 * @next: point to the next node
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/****** prototypes ******/

size_t print_dlistint(const dlistint_t *h);

#endif
