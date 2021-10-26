#include "main.h"
/**
 * _isalpha - Review lowcase or uppercase
 * @c: char lower or upper
 * Return: Return 1 low, 0 upper
 */
int _isalpha(int c)
{
	if ((c >= 97) & (c <= 122) || (c >= 65) & (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

