#include "search_algos.h"

/* function declarations */
int do_binary_search(int *array, int value, size_t left, size_t right);
void print_array(int *array, size_t left, size_t right);

/**
 * exponential_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: size of the given array
 * @value: the value to search for
 * Description: search using the exponential search algorithm
 * Return: first index where @value is located, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low, high;

	if (array == NULL)
		return (-1);

	/* check first array element */
	if (array[0] == value)
		return (0);

	while (i < size || array[i] >= value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);

		if (array[i] == value) /* element found */
			return (i);

		i *= 2;

		if (array[i] > value || i >= size) /* passed the target value */
		{
			low = (i / 2);
			high = (i >= size) ? (size - 1) : i;
			printf("Value found between indexes [%lu] and [%lu]\n", low, high);
			/* apply binary search */
			return (do_binary_search(array, value, low, high));
		}
	}

	return (-1);
}

/**
 * do_binary_search - searches for a value in a sorted array (ASC)
 * @array: pointer to the first element of the array to search in
 * @value: the value to search for
 * @left: leftmost index of the current search range
 * @right: rightmost index of the current search range
 * Description: searching with binary search algorithm
 * Return: the index where @value is located, otherwise -1
 */
int do_binary_search(int *array, int value, size_t left, size_t right)
{
	int mid;

	if (left > right)
		return (-1);

	/* print target array */
	print_array(array, left, right);

	/* get the middle index of the array */
	mid = (left + right) / 2;

	/* element found !! */
	if (array[mid] == value)
		return (mid);

	/* element can only be present in the left subarray */
	if (array[mid] > value)
		right = mid - 1;

	/* element can only be present in the right subarray */
	if (array[mid] < value)
		left = mid + 1;

	return (do_binary_search(array, value, left, right));
}

/**
 * print_array - print a range of an array
 * @array: pointer to the first element of the array
 * @left: leftmost index of the current print range
 * @right: rightmost index of the current print range
 * Return: nothing
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf("%s", ", ");
		else
			printf("\n");
	}
}

