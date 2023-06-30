#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: the number of elements OF the array to be printed
 * Return: print a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);

	if (i == (n - 1))
		printf("%d", a[n - 1]);

	printf("\n");
}