#include "dog.h"

/**
 * len - lenght of the string
 * @str: the string
 * Return: lenght
 */

int len(char *str)
{
	int lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

/**
 * str_copy - copy the string pointed by src finish by (\0)
 * @dest: copy source
 * @src: source to be copied
 * Return: copy of source
 */

char *str_copy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create new instance of struct dog
 * @name: argument
 * @age: argument
 * @owner: argument
 * Return: init instance of struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1 = malloc(sizeof(dog_t));

	if (dog1 == NULL)
		return (NULL);

	dog1->age = age;
	dog1->name = NULL;
	dog1->owner = NULL;

	if (name != NULL)
	{
		dog1->name = malloc(len(name) + 1);
		if (dog1->name == NULL)
		{
			free(dog1);
			return (NULL);
		}
		str_copy(dog1->name, name);
	}

	if (owner != NULL)
	{
		dog1->owner = malloc(len(owner) + 1);
		if (dog1->owner == NULL)
		{
			free(dog1->name);
			free(dog1);
			return (NULL);
		}
		str_copy(dog1->owner, owner);
	}

	return (dog1);
}

