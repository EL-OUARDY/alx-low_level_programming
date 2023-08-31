#include "main.h"

int sqrt_recursion_helper(int num, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number,
 * using recursion.
 * @n: number parameter
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_recursion_helper(n, 0));
}

/**
 * sqrt_recursion_helper - returns the natural square root of a number,
 * using recursion.
 * @num: number parameter
 * @guess: number parameter
 * Return: integer
 */
int sqrt_recursion_helper(int num, int guess)
{
	if (guess * guess > num)
		return (-1);

	/* guess is right */
	if (guess * guess == num)
		return (guess);

	return (sqrt_recursion_helper(num, guess + 1));
}
