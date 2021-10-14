#include "main.h"
/**
 * _strcmp - diference of values s1 s2
 * @s1: string 1
 * @s2: string 2
 * Return: value of diference s1 s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int comp = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			comp = 0;
			i++;

		}
		else
		{
			comp = s1[i] - s2[i];
			break;
		}
	}
	return (comp);

}
