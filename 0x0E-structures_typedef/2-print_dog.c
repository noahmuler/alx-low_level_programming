#include <stdio.h>
#include "dog.h"
/**
 * print_dog - initialize a variable of type struct dog.
 * @d: pointer to struct type dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Name: %f\n", d->age);
		printf("Name: %s\n", d->owner);
	}
}
