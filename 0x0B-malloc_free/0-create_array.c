#include "main.h"
#include <stdlib.h>
/**
 * char *create_array - create array
 * @size: the allocated memory size
 * @c: a character to initiate array with
 * Description: creates an array of chars, with dynamic memory using malloc
 * and initializes it with a specific char
 * Return: a pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	/* initiate array */
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
