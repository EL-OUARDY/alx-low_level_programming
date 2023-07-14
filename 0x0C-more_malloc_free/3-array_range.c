#include "main.h"
#include <stdlib.h>
/**
 * int *array_range - creates an array of integers
 * @min: input integer
 * @max: input integer
 * Description: The array created should contain all the values
 * from min (included) to max (included), ordered from min to max
 * Return: a pointerto the allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
