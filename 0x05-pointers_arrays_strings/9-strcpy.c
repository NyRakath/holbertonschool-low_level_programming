#include "main.h"
/**
 * _strcpy - Copy a string and duplicate
 * @dest: output 
 * @src: Input
 * Return:0
 */
char _strcpy(char *dest, char *scr)
{
	int ardd = 0;

	for (ardd = 0; src[ardd] != '\0'; ardd++)
	{
		dest[ardd] = src[ardd];
	} 
	dest[ardd] = src[ardd];
	return (dest);
}
