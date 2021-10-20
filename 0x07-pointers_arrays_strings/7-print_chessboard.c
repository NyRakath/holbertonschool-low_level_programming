#include "main.h"
/**
 * print_chessboard - print chess
 * @a: pointer
 */
void print_chessboard(char (*a)[8])
{
	int colum, row;

	for (row = 0; row < 8; row++)
	{
		for (colum = 0; colum < 8; colum++)
			printf("%c", a[row][colum]);
		printf("\n");
	}
}
