#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strlen - returns length of string
*@s: a string
*Return: i
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * print_dog - info of the dog
 * @d: pointer the stucture any dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
 	dog_t *dogy;
	int len_name, len_owner, count;

	dogy = (dog_t *)malloc(sizeof(dog_t));
	if(dogy == NULL)
		return(NULL);
	len_name = _strlen(name);
	len_owner = _strlen(owner);
	dogy->name = malloc(sizeof(dogy->name) * len_name);
	if (dogy->name == NULL)
	{
		free (dogy->name);
		return (NULL);
	}
	for (count = 0; count <= len_name; count++)
		*(dogy->name + count) = *(name + count);
	dogy->age = age;
	dogy->owner = malloc(sizeof(dogy->owner) * len_owner);
	if (dogy->owner == NULL)
	{
		free (dogy->name);
		free (dogy);
		return (NULL);
	}
	for (count = 0; count <= len_owner; count++)
		*(dogy->owner + count) = *(owner + count);
	return (dogy);
}