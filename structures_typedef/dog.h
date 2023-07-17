#ifndef DOG_H_
#define DOG_H_

/**
 * dog_t - typedeffor struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - structure for dogs
 * @name: first argument
 * @age: second argument
 * @owner: last argument
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
