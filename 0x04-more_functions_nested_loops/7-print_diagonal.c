#include "main.h"
/**
* print_diagonal - draws a diagonal line
* @n: integer is passed as an argument
* Description: receive an integer and draw a diagonal with back slashes \
* Return: int
*/
void print_diagonal(int n)
{
	int i;
	int j;
	int spaces = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < spaces ; j++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
		spaces++;
	}
}
