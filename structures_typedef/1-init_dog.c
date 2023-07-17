#include "dog.h"

/**
 * init_dog - init variable of type struct dog
 * @d: a variable of type struct dog
 * @name: argument
 * @age: argument
 * @owner: argument
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
