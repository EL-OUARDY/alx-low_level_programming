#include "main.h"
/**
 * _isupper - check if uppercase
 * @c: integer is passed as an argument
 * Description: receive an interger and tell if it is an uppercase
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
