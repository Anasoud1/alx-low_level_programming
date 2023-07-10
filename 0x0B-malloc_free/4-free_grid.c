#include "main.h"
/**
 * free_grid - function that free a 2d grid
 * @grid: parametre to free
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
