#include "main.h"
/**
 * *create_array - create a array with malloc and a character
 * @size: Size of array
 * @c: character asigment
 * Return: array chr or NULL for condictions
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