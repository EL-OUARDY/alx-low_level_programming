#include "main.h"
/**
* print_line - horizontal line with underscores
* @n: integer is passed as an argument
* Description: receive an integer and draw a line with _
* Return: int
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n ; i++)
		_putchar(95);

	_putchar('\n');
}
