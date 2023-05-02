#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - A function that frees 2d array
 * @grid: parameter for 2 dimesional  grid
 * @height: parameter for height 2 dimension of grid
 * Description: frees memory of grid
 * Return: empty
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}

