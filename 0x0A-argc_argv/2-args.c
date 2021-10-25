#include "main.h"
/**
 * main - print argument with new line
 * @argc: Programs argument count.
 * @argv: Programs argument vector.
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
