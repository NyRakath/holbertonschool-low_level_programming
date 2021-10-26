#include "main.h"
/**
* _strchr - first ocurrence in a char
* @s: char
* @c: char
* Return: string + itera
*/
char *_strchr(char *s, char c)
{
	int itera;

	for (itera = 0; *(s + itera) != '\0'; itera++)
		if (*(s + itera) == c)
			return (s + itera);
	if (*(s + itera) == c)
		return (s + itera);
	return (NULL);
}
