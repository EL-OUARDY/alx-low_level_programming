#include <stdlib.h>

/**
 * int_index - Search through an array
 * @array: input array
 * @size: array size
 * @cmp: a pointer to the compare function
 * Description: a function that searches for an integer.
 * Return: the index of element OR -1 if there is no matches (or size <= 0)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* check arguments */
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* loop over the array*/
	for (i = 0; i < size; i++)
	{
		/* check using the passed compare function */
		if (cmp(array[i]) > 0)
			return (i);
	}
	/* not found */
	return (-1);
}
