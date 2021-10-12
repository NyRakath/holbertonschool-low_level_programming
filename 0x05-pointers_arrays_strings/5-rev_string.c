#include "main.h"
/**
 * rev_string - Reverse of a string
 * @s: Input of value
 * Return:0
 */
void rev_string(char *s)
{
	char *start = s;
	char g;

	for (; *(s); s++)
	{
	}
	s--;
	for (; s >= start; s--)
	{
		g = *start;
		*start = *s;
		*s = g;
		start++;
	}
}
