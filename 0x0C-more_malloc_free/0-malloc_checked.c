#include "main.h"
#include <stdlib.h>
/**
 * void *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * @c: a character
 * Description: dynamic allocation of memory with a given number
 * Return: a pointerto the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
