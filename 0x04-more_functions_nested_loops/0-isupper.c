#include "main.h"
/**
 * _isupper - check if uppercase
 * @c: character is passed as an argument
 * Description: receive a char interger and tell if it is a lowercase
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
