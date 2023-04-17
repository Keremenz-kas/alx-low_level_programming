#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initializes a variable
 * @d: variable to be initialized
 * @name: name
 * @age: age
 * @owner: owner
 * Defining a new type struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
