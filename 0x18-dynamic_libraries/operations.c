#include <stdio.h>

/*
 * add - Adds two integers and returns the result.
 * @a: The first integer.
 * @b: The second integer.
 * Returns: The sum of a and b.
 */
int add(int a, int b)
{
	return (a + b);
}

/*
 * sub - Subtracts b from a and returns the result.
 * @a: The first integer.
 * @b: The second integer.
 * Returns: The result of subtracting b from a.
 */
int sub(int a, int b)
{
	return (a - b);
}

/*
 * div - Divides a by b and returns the result.
 * @a: The numerator.
 * @b: The denominator (should be non-zero).
 * Returns: The result of dividing a by b.
 */
int div(int a, int b)
{
	return (a / b);
}

/*
 * mul - Multiplies two integers and returns the result.
 * @a: The first integer.
 * @b: The second integer.
 * Returns: The product of a and b.
 */
int mul(int a, int b)
{
	return (a * b);
}

/*
 * mod - Computes the remainder when dividing a by b.
 * @a: The dividend.
 * @b: The divisor (should be non-zero).
 * Returns: The remainder of the division of a by b.
 */
int mod(int a, int b)
{
	return (a % b);
}

