#include "main.h"
/**
 * _strlen - Longest of a string
 * @s: string
 * Return: value integer in numberin number  of string
 */

int _strlen(char *s)
{
	int longi = 0;

	for (; *s != '\0'; longi++)
	{
		s++;
	}
	return (longi);
}
