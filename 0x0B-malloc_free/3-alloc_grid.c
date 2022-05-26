#include "main.h"
/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: takes in width of grid
 * @height: takes the height of grid
 * Return: grid with freed spaces
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
			{
				free(grid[i]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}
		return (grid);
}
