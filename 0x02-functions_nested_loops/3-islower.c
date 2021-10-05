#include "main.h"
/**
 * _islower - Review lowcase or uppercase
 * @c: char lower or upper
 * Return: Return 1 low, 0 upper
 */
int _islower(int c)
{
	if ((c >= 97) & (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
