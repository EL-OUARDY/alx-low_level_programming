#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: size of the given array
 * @value: the value to search for
 * Description: search using the Interpolation search algorithm
 * Return: first index where @value is located, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = (size - 1);
	while (low <= high)
	{
		if (low == high) /* reached the end */
		{
			if (array[low] == value) /* target is the first element */
				return (low);
			return (-1);
		}

		/* determine the probe position */
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));

		/* index out of range */
		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			return (-1); /* not found */
		}

		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);

		if (array[pos] == value) /* element found */
			return (pos);

		if (array[pos] > value) /* element in the left subarray */
			high = pos - 1;
		else /* element in the right subarray */
			low = pos + 1;
	}

	return (-1);
}
