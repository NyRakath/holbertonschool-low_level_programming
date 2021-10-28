#include "main.h"
/**
 * free_grid - free variable memory in the heap for integer
 * @grid: integers double pointer
 * @height: free grid bidimensional
 * Return:0
 */
void free_grid(int **grid, int height)
{
	int iterator = 0;

	for (iterator = 0; iterator < height; iterator++)
	{
		free(grid[iterator]);
	}
	free(grid);

}
