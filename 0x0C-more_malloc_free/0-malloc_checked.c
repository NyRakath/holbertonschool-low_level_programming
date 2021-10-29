#include "main.h"
/**
* *malloc_checked - Checked memory and allocate spaces in heap
* @b: spaces allocated
* Return: pointer val
**/
void *malloc_checked(unsigned int b)
{
	void *val;
	char *str;

	val =  malloc(b);
	if (val == NULL)
		exit(98);
	return (val);
}
