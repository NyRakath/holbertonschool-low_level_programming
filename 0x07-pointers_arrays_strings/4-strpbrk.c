#include "main.h"
/**
 * *_strpbrk - search a byte char and print after
 * @s: string
 * @accept: first char
 * Return:s or NULL when 0 coincidence
 */
char *_strpbrk(char *s, char *accept)
{
	char *buf = accept;

	while (*s != '\0')
	{
		for (accept = buf; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
