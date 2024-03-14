#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: size of the given array
 * @value: the value to search for
 * Description: searching with jump search algorithm
 * Return: first index where @value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t high = 0, low = 0, i = 0, jump;

	if (array == NULL)
		return (-1);

	/* get the jump value from size of the array */
	jump = sqrt(size);

	while (high < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)high, array[high]);
		if (array[high] == value)
			return (high); /* return the index where element has found */

		/* jump */
		high = high + jump;

		/* check if element inside block jump */
		if (high > (size - 1) || array[high] >= value)
		{
			low = high - jump;
			printf("Value found between indexes [%lu] and [%lu]\n", low, high);

			/* in case, the jump passed the array range */
			if (high > (size - 1))
				high = (size - 1);

			/* linear search */
			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);

				if (array[i] == value)
					return (i); /* return the index where element has found */
			}

			return (-1);
		}
	}
	return (-1);
}
