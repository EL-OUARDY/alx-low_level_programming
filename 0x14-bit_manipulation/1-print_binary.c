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
	int digit;

	/* Special case: print '0' for input 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		digit = n & 1; /* Get the least significant bit (0 or 1) */
		_putchar(digit + '0');
		n >>= 1; /* Right-shift by 1 to shift to the next bit */
	}
}
