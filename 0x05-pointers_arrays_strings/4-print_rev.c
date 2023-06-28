#include "main.h"

/**
* print_rev - prints a given string in reverse
* @s: a pointer to a char passed as an argument
* Return: Nothing
*/
void print_rev(char *s)
{
	int l = 0;

	while (*s++)
		l++;

	s -= 2;
	while (l > 0)
	{
		_putchar(*s);
		l--;
		s--;
	}
	_putchar('\n');
}
