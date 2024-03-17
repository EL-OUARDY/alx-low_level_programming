#include "search_algos.h"

/* function declarations */
void print_array(int *array, size_t left, size_t right);
int bs_helper(int *array, int value, size_t left, size_t right);

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

	return (bs_helper(array, value, 0, size - 1));
}

/**
 * bs_helper - searches for a value in a sorted array (ASC)
 * @array: pointer to the first element of the array to search in
 * @left: leftmost index of the current search range
 * @right: rightmost index of the current search range
 * @value: the value to search for
 * Description: searching with binary search algorithm
 * Return: the index where @value is located, otherwise -1
 */
int bs_helper(int *array, int value, size_t left, size_t right)
{
	size_t mid;

	if (!array)
		return (-1);

	mid = (left + right) / 2;

	print_array(array, left, right);

	if (array[left] == value)
		return ((int)left);

	if (array[left] != array[right])
	{
		if (array[mid] < value)
			return (bs_helper(array, value,
							  mid + 1, right));
		if (array[mid] >= value)
			return (bs_helper(array, value,
							  left, mid));
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
