#include "main.h"

/**
 * main - prints program's argument count.
 * @argc: Program's argument count.
 * @argv: Program's argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
