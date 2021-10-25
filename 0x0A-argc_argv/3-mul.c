#include "main.h"
/**
 * main - prints multiplies of argv[1] * argv[2]
 * @argc: Program's argument count.
 * @argv: Program's argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int mul1, mul2;

	mul1 = mul2 = 0;

	if (argc != 3)
		printf("Error\n");
	else
	{
		mul1 = atoi(argv[1]);
		mul2 = atoi(argv[2]);

		printf("%d\n", mul1 * mul2);
	}

	return (0);
}
