#include "main.h"

int prime_helper(int n, int i);

/**
 * is_prime_number - Check if the input integer is a "Prime Number"
 * @n: input integer
 * Return: 1 or 0 | returns 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, n - 1));
}

/**
 * prime_helper - Helper function to detect prime numbers
 * @n: number
 * @i: iterator variable
 *
 * Return: 1 means n is prime, 0 mean it's not
 */
int prime_helper(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_helper(n, i - 1));
}
