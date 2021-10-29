#include "main.h"
/**
* *_calloc - made calloc with malloc funtion
* @nmemb: value of count
* @size: sizeof value of variable
* Return: pointer to new space in memory or null
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *scalloc;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	scalloc = malloc(size * nmemb);
	if (scalloc == NULL)
		return (NULL);

	for (; i < (nmemb * size); i++)
		scalloc[i] = 0;
	return (scalloc);

}
