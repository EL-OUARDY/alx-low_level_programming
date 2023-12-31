#include "main.h"
/**
 * _pow_recursion - return x raised to the power of y, using recursion.
 * @x: number parameter
 * @y: number parameter
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, --y));
}
