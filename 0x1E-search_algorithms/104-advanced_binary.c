#include "search_algos.h"

/* function declarations */
void print_array(int *array, size_t left, size_t right);
int do_binary_search(int *array, size_t left, size_t right, int value);

/**
 * advanced_binary - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: size of the given array
 * @value: the value to search for
 * Description: search using the advanced_binary search algorithm
 * Return: first index where @value is located, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
	{
		return (-1);
	}

	return (do_binary_search(array, 0, size - 1, value));
}

/**
 * do_binary_search - searches for a value in a sorted array (ASC)
 * @array: pointer to the first element of the array to search in
 * @left: leftmost index of the current search range
 * @right: rightmost index of the current search range
 * @value: the value to search for
 * Description: searching with binary search algorithm
 * Return: the index where @value is located, otherwise -1
 */
int do_binary_search(int *array, size_t left, size_t right, int value)
{
	if (right >= left)
	{
		size_t mid = left + (right - left) / 2;
		print_array(array, left, right);

		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] > value)
		{
			return (do_binary_search(array, left, mid - 1, value));
		}

		return (do_binary_search(array, mid + 1, right, value));
	}

	return (-1);
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
