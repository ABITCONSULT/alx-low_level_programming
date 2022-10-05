#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the grid memory space created above.
 * @height: the height of the grid
 * @grid: the gree to free of malloc
 * Return: returns nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
