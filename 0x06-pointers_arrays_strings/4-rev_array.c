#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reverse the content of an array
 * @a: input array
 * @n: number of elements of the array
 * Return: "walo" - Means nothing in moroccan darija ^^
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
