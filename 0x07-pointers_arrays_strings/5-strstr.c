#include "main.h"
/**
 * *_strstr - Found a substring or something coindence of a substring
 * @haystack: string evaluate
 * @needle: string for coindence
 * Return: Return haystack something coindence or NULL nothing coincidence
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = needle;
	char *p2;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack != *p)
		{
			continue;
		}
		p2 = haystack;
		for (needle = p; 1; needle++)
		{
			if (*needle == 0)
			{
				return (haystack);
			}
			if (*p2++ != *needle)
			{
				break;
			}
		}
	}
	return (NULL);
}
