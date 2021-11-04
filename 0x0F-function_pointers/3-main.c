#include "3-calc.h"
#define ERROR "Error\n"
/**
 * main - Operation with 2 integers
 * @argc: num of dates 4 + name of program and 3 value "n + n"
 * @argv: arg[] array or vector of dates type char
 * Return: Nothing 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*r)(int, int);

	if (argc != 4)
	{
		printf(ERROR);
		exit(98);
	}
	r = get_op_func(*(argv + 2));
	/*Significa el operador*/
	/*y la op_mth que guardará*/
	if (r == NULL)
	{
		printf(ERROR);
		exit(99);
	}
	num1 = atoi(*(argv + 1));
	num2 = atoi(*(argv + 3));
	result = r(num1, num2);
	if (result == 0)
	{
		printf(ERROR);
		exit(100);
	}
	printf("%d\n", result);
	return (0);
}
