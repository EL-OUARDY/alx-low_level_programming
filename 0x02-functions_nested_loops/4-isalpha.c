#include "main.h"
/**
 * _isalpha - check for alphabet
 * @c: integer is passed as an argument
 * Description: receive an char interger and tell if it is an alphabet
 * Return: int
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
