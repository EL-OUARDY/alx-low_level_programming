#include <stdio.h>
#include "main.h"

/**
 * get_bit - get bit value
 * @n: decimal input
 * @index: index of target bit
 * Description: get bit of n at given index
 * Return: bit - integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index) & 1;

	return (bit);
}
