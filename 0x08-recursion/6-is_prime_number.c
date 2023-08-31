#include "main.h"
int prime_helper(int n, int i);
/**
 * is_prime_number - check if a given number is prime number, using recursion
 * @n: number parameter
 * Return: 1 means n is prime, 0 mean it's not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_helper(n, n - 1));
}

/**
 * prime_helper - helper function to check prime numbers
 * @n: number
 * @i: iterator
 * Return: integer (1 or 0)
 */
int prime_helper(int n, int i)
{
	/*  reach without finding a product of two smaller natural numbers */
	if (i == 1)
		return (1);

	/* a product of two smaller natural numbers found */
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i - 1));
}
