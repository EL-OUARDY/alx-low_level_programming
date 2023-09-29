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
	unsigned long int digit;
	int i, flag = 0;

	if (n == 0)
	{
		putchar('0'); /* Special case: print '0' for input 0 */
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		digit = n >> i; /* Right-shift by i to shift to the next bit */

		if (digit & 1)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag == 1)
			putchar('0');
	}
	if (flag != 1)
		putchar('0');
}
