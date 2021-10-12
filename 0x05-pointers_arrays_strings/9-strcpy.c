#include "main.h"
/**
 * _strcpy - Copy a string and duplicate
 * @dest: output 
 * @src: Input
 * Return:0
 */
char *_strcpy(char *dest, char *src);
{
	int a = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	} 
	dest[a] = src[a];
	return (dest);
}
