#include "main.h"
/**
 * factorial - calculate the factorial of a given number, using recursion.
 * @n: number parameter
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	/* Used Formula: n! = n * (n-1)! */
	return (n * factorial(n - 1));
}
