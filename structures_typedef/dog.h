#ifndef DOG_H
#define DOG_H

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
