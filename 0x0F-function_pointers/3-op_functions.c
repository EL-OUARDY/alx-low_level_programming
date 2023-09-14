#include "3-calc.h"

/* declarations */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - calculate the sum
 * @a: input number.
 * @b: input number.
 *
 * Return: integer - sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference
 * @a: input number.
 * @b: input number.
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the Product
 * @a: input number
 * @b: input number
 *
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate the division
 * @a: input number
 * @b: input number
 *
 * Return: integer - division result of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder
 * @a: input number
 * @b: input number.
 *
 * Return: integer - Remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}


