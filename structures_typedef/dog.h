#ifndef DOG_H_
#define DOG_H_

/****** libraries ******/

#include <stdio.h>
#include <stdlib.h>

/****** Structure ******/

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - structure for dogs
 * @name: first argument
 * @age: second argument
 * @owner: third argument
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/****** prototypes ******/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
