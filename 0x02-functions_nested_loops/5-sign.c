#include "main.h"
/**
 * print_sign - check for a number sign
 * @n: integer is passed as an argument
 * Description: receive a and act based on his sign
 * Return: int
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
