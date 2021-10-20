#include "main.h"
/**
 * *_memcpy - area memory adreess
 * @dest: final string
 * @src: start string
 * @n: size of the adress
 * Return: final string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itera;

	for (itera = 0; itera < n; itera++)
	{
		*(dest + itera) = *(src + itera);
	}

	return (dest);
}
