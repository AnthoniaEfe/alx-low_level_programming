#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog structure
 *
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif