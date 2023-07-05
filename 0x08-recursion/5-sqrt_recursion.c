#include "main.h"

int sqrt_recursion_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a given number
 * @n: number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_recursion_helper(n, 0));
}

/**
 * sqrt_recursion_helper - a helper function to find the natural square root
 * @n: number
 * @i: iterator variable
 *
 * Return: integer - Natural square root
 */
int sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursion_helper(n, i + 1));
}

