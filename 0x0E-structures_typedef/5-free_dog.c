#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - free memory heap of d
* @d: pointer to a dog of type dog_t
*/
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
