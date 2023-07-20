#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Executes a function
 * @array: input array
 * @size: size of the array
 * @action: pointer function to execute
 * Description: Executes a function given as a
 * parameter on each element of an array.
 * Return: nothing -_-
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || !(size > 0) || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
