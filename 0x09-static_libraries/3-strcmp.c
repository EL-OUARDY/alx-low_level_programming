#include "main.h"

/**
 * _strcmp - a function that compare two strings
 * @s1: string 1
 * @s2: atring 2
 * Return: a an integer indicates the difference between s1 & s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

