#include "main.h"
/**
 * _isdigit - check the code.
 * @c: Value if letter is uppercase or not
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
