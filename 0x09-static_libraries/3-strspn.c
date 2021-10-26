#include "main.h"
#include <stdio.h>

/**
 * _strspn - lenght coindicende string 2 to string 1
 * @s: - string
 * @accept: - chars search
 * Return: lengh of chars in integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int leng = 0;
	char *poins = s, *paacc = accept;

	while (*poins)
	{
		while (*paacc)
		{
			if (*paacc == *poins)
			{
				leng++;
				break;
			}
			else
				paacc++;
		}
		if (*paacc)
		{
			paacc = accept;
			poins++;
		}
		else
			break;
	}

	return (leng);
}
