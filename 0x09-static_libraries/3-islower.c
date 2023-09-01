#include "main.h"
/**
 * _islower - check for lowercase
 * @c: integer is passed as an argument
 * Description: receive an char interger and tell if it is a lowercase
 * Return: int
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

