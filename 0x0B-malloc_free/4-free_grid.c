#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a 2d array (Matrix)
 * @grid: the 2d array to be freed
 * @height: matrix input height
 * Description: free allocated memory space of a given 2d array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/* free each array element */
	for (i = 0; i < height; i++)
		free(grid[i]);
	/* free array */
	grid(ptr);
}
