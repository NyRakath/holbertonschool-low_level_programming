#include "main.h"
/**
* *string_nconcat - concatenates two strings with malloc
* @s1: first string
* @s2: second string
* @n: count char of the s2 concatenate in s1
* Return: pointer to new space in memory or null
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int allstring = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		allstring = i + j;
	else
		allstring = i + n;
	p = malloc(sizeof(char) * (allstring + 1));
	if (p == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		p[i] = s2[j];
		i++, j++;
	}
	p[i] = '\0';
	return (p);
}

