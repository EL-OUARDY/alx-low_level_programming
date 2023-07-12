#include "main.h"
#include <stdlib.h>
/**
 * char *create_array - create an array
 * @size: the allocated memory size
 * @c: a character
 * Description: creates an array of chars,
 * and initializes it with a specific char
 * Return: a pointer to a character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
		ar[i] = c;

	return (ar);
}
