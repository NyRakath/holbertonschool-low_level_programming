#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: contenates string
 * @src: string begin
 * @n: Value of array
 * Return: string of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
