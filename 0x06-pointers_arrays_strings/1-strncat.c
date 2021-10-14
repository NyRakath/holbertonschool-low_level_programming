#include "main.h"
/**
 * _strlen - Count the bytes of the lengh string
 * @string: string
 * Return: Value of the counter
 */
int _strlen(char *string)
{
	int counter = 0;

	for (; string[counter] != '\0'; counter++)
	{
	}
	return  (counter);
}
/**
 * _strncat - Contenate two strings
 * @dest: String 1
 * @src: String 2 with
 * @n: bytes of the lenght of string
 * Return: Return string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i = 0;
	char valUpper[]; {','';''.''!''=''"''('')''{''}'' ''\n'}

	for (; ((i < n) && (src[i] != '\0')); i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
