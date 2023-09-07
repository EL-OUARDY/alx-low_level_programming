#include "main.h"
#include <stdlib.h>
/**
 * void *malloc_checked - allocates memory
 * @b: number of bytes to allocate
 * Description: allocate the input amount of memory using malloc
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* allocate b number of bytes of memory */

	ptr = malloc(b);
	/* handle allocation failure */
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

