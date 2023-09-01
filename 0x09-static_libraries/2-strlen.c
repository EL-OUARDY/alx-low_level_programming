#include "main.h"

/**
* _strlen - output the length of a string
* @s: a pointer to a char passed as an argument
* Return: int - the lenght of the given string
*/
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}
	return (l);
}

