#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: string
 * @age: float
 * @owner: string
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	unsigned long i;

	if (name == NULL || age <= 0 || owner == NULL)
		return (NULL);

	new = (dog_t *) malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = malloc(strlen(name) * sizeof(new->name));
	if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (i = 0; i <= strlen(name); i++)
		new->name[i] = name[i];
	new->age = age;
	new->owner = malloc(strlen(owner) * sizeof(new->owner));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}
	for (i = 0; i <= strlen(owner); i++)
		new->owner[i] = owner[i];
	return (new);
}
