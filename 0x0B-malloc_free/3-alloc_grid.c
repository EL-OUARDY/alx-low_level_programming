#include "main.h"
#include <stdlib.h>
/**
 * char **alloc_grid - create a 2D array (Matrix)
 * @width: matrix input width
 * @height: matrix input height
 * Description: returns a pointer to a 2 dimensional array of integers
 * Return: a pointer to the created 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for*/
	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		/*free array */
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			/* free each array element */
			for (; i >= 0; i--)
				free(ptr[i]);
			/* free array */
			free(ptr);
			return (NULL);
		}
	}

	/* initiate array with ZERO */
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
