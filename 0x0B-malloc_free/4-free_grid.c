#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Free Memory
 * @grid: array
 * @height: array height
 * Description: frees a 2D previously created by your alloc_grid function
 * Return: nothing
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
