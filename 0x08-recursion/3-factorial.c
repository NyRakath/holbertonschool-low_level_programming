#include "main.h"
/**
* factorial - Number of multiplier a number
* @n: Number factorial
* Return: -1 error in recursion 0 good function or factorial funtion
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
