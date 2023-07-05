#include "main.h"

/**
 * factorial - calculate the factotial of a given number
 * @n: number
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
