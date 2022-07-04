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
typedef struct dog dog_t;
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
