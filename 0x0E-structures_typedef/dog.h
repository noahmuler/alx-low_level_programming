#ifndef dog_h
#define dog_h

#include "dog.h"
/**
 * struct dog - dog struct
 * @name: char ptr
 * @age: float
 * @owner: char ptr
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
