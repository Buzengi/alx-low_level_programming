#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function to free memory
 * @grid: pointer to grid of int type
 * @height: int type
 * Return: clean up memory
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
