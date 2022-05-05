#include "main.h"
/**
 * free_grid - allocates a grid, make space and free space
 * @grid: takes in width of grid
 * @height: takes in height of grid
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
	{
		gree(grid[i]);
	}
	
	free(grid);
}
