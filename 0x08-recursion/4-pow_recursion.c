#include "main.h"
/**
 * _pow_recursion - potencia of a number 
 * @x: number base
 * @y: number pow
 * Return: -1 error recursion 1 end of pow or recursion of a pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}