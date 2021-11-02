#ifndef _STRUCT_DOG_
#define _STRUCT_DOG_
/**
 * struct dog - A structure for a dates from a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /*_DOG_STRUCTURE_*/
