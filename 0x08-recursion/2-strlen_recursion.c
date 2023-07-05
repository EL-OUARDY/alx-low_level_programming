#include "main.h"

/**
 * _strlen_recursion - count the length of given string
 * @s: character pointer (string)
 * Return: the number of caracters - integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
