#include "main.h"
/**
 * _isdigit - check if uppercase
 * @c: integer is passed as an argument
 * Description: receive an integer and tell if it is a digit or not
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
