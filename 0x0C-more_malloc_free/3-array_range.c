#include "main.h"
#include <stdlib.h>
/**
 * int *array_range - creates an array of integers
 * @min: input integer
 * @max: input integer
 * Description: The array contains integers from the input min
 * to the max input, ordered from min to max
 * Return: a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	/* the memory space to be allocated */
	size = (max - min + 1);

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	/* fill array */
	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}

