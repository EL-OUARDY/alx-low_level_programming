#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip bits
 * @n: decimal 1
 * @m: decimal 2
 * Description: calculate the number of bits to change to get from n to m
 * Return: returns the number of bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	/* XOR n and m to find the differing bits */
	xor_result = n ^ m;

	/* Count the set bits in the XOR result */
	while (xor_result > 0)
	{
		count += xor_result & 1; /* Check the least significant bit */
		xor_result >>= 1; /* Right-shift to examine the next bit */
	}

	return (count);
}
