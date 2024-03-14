#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: size of the given array
 * @value: the value to search for
 * Description: searching with linear search algorithm
 * Return: first index where @value is located, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array == NULL)
        return (-1);

    /* loop through array items */
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);

        if (array[i] == value)
            return (i); /* return the index where element has found */
    }

    return (-1);
}
