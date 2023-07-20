#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Search function
 * @array: input array
 * @size: array size
 * @cmp: a pointer to a function to be used to compare values
 * Description: a function that searches for an integer.
 * Return: index of element OR -1 if there is no matches (or size <= 0)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}
