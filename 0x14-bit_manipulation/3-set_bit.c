#include <stdio.h>
#include "main.h"

/**
 * set_bit - change bit value
 * @n: decimal
 * @index: targeted index
 * Description: sets the value of a bit to 1 at a given index
 * Return: success 1 | failed -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* out of range */
	if (index > 63)
		return (-1);

	/* Create a mask with only the bit at the specified index set to 1 */
	unsigned int mask = 1 << index;

	/* Set the bit at the specified index to 1 in the decimal number */
	*n |= mask;

	return (1);
}
