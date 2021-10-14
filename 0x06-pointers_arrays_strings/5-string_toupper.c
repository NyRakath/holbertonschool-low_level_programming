#include "main.h"
/**
 * string_toupper - Convert a string y Uppercase
 * @s: string input
 * Return: string output
 */

char *string_toupper(char *s)
{
	int i = 0, j = 0;

	char lower[28] = "abcdefghijklmnopqrstuvwxyz";
	char upper[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (; s[i]; i++)
	{
		for (j = 0; lower[j] != '\0'; j++)
		{
			if (lower[j] == s[i])
			{
				s[i] = upper[j];
				break;
			}
		}
	}
	return (s);
}
