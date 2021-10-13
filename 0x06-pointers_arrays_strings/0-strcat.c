#include "main.h"
/**
 * _strcat - Contenate two strings
 * @dest: String 1
 * @src: String 2
 * Return: Return string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	for (; dest[a] != '\0'; a++)
	{
	}
	for (; src[b] != '\0'; b++)
		dest[a++] = src[b];

	return (dest);
}
