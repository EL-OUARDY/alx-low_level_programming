#include <stdlib.h>

/**
 * array_iterator - executes function on array
 * @array: input array
 * @size: array size
 * @action: function pointer
 * Description: executes a function given as
 * a parameter on each element of an array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	/* check parameters*/
	if (array == NULL || size <= 0 || action == NULL)
		return;

	/* iterate over the array */
	for (i = 0; i < size; i++)
		action(array[i]);
}
