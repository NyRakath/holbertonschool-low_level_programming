#include "3-calc.h"

/**
 * op_add - add sum 2 integers
 * @a: num1
 * @b: num2
 * Return: num1 + num2
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub "-" 2 integers
 * @a: num1
 * @b: num2
 * Return: num1 - num2
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul multiplier 2 integers
 * @a: num1
 * @b: num2
 * Return: num1 * num2
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide "/" 2 integers
 * @a: num1
 * @b: num2
 * Return: num1 / num2 or -1 if num2 is 0
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
/**
 * op_mod - module "%" 2 integers
 * @a: num1
 * @b: num2
 * Return: num1 % num2 or -1 if num2 is 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}




