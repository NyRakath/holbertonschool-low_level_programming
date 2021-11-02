#include <stdio.h>
#include "dog.h"
/**
 * init_dog - variable type structre entry
 * @name: name of a dog
 * @d: pointer the stucture any dog
 * @age: age of a dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
