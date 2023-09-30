#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clear bit value
 * @n: decimal input
 * @index: index of target bit
 * Description: sets the value of a bit to 0 at a given index.
 * Return: success 1 | failed -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* out of range */
	if (index > 63)
		return (-1);

	/* Create a mask with only the bit at the specified index set to 0 */
	mask = ~(1UL << index);

	/* Clear the bit at the specified index to 0 in the number */
	*n = *n & mask;

	return (1);
}
