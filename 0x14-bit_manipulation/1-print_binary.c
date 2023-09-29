#include <stdio.h>
#include "main.h"

/**
 * print_binary - print a binary
 * @n: decimal input
 * Description: convert a given decimal into binary and print it
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits[64]; /* 64-bit integer */
	int index = 0;

	/* Special case: print '0' for input 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		bits[index] = n & 1; /* Get the least significant bit (0 or 1) */
		n >>= 1; /* Right-shift by 1 to shift to the next bit */
		index++;
	}

	/* Print the binary representation in reverse order */
	for (int i = index - 1; i >= 0; i--)
		_putchar(bits[i] + '0');
}
