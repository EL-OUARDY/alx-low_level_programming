#include "main.h"
#include <stdlib.h>

/**
 * void * _calloc - allocates memory for an array
 * @nmemb: number of elements to be allocated
 * @size: size of each element
 * Description: memory allocation for an array using malloc
 * and initialize it to zero
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory */
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	/* set each element to zero */
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
