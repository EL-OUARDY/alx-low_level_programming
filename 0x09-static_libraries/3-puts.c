#include "main.h"

/**
* _puts - prints a given string
* @str: a pointer to a char passed as an argument
* Return: Nothing
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}

