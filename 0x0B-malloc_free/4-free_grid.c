#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: matrix being passed
 * @height: freeing using this variable
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
		free(grid[f]);
	free(grid);
}
