#include "search_algos.h"

int binary_search_helper(int *array, int value, size_t left, size_t right);
void print_array(int *array, size_t left, size_t right);

/**
 * linear_search - searches for a value in a sorted array (ASC) of integers
 * @array: pointer to the first element of the array to search in
 * @size: size of the given array
 * @value: the value to search for
 * Description: searching with binary search algorithm
 * Return: the index where @value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	/* binary search using the recursive function */
	return (binary_search_helper(array, value, 0, (size - 1)));
}

/**
 * binary_search_helper - searches for a value in a sorted array (ASC)
 * @array: pointer to the first element of the array to search in
 * @value: the value to search for
 * @left: leftmost index of the current search range
 * @right: rightmost index of the current search range
 * Description: searching with binary search algorithm
 * Return: the index where @value is located, otherwise -1
 */
int binary_search_helper(int *array, int value, size_t left, size_t right)
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

	return binary_search_helper(array, value, left, right);
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
