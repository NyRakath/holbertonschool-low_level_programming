#include "main.h"
/**
 * *create_array - create a array with malloc and a character
 * @size: Size of array
 * @c: character asigment
 * Return: array chr or NULL for condictions
 */
char *create_array(unsigned int size, char c)
{
	char *chr = NULL;
	char *error = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (error);
	chr = (char *)malloc(sizeof(char) * size);
	if (size >= 1 && chr != NULL)
	{
		for (; i < size; i++)
			*(chr + i) = c;
		return (chr);
	}
	else
		return (error);
}
