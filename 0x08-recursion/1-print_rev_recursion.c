#include "main.h"
/**
 * _puts_recursion - Prints a string in reverse order, using recursion.
 * @s: string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
