#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to struct
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
