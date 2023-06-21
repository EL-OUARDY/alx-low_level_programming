#include "main.h"
/**
 * _abs - calculate the absolute value
 * @n: integer is passed as an argument
 * Description: output the absolute value of a given number
 * Return: int
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
