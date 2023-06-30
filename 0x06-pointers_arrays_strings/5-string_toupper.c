#include "main.h"

/**
 * *string_toupper - change lowercase letters to UPPERCASE
 * @str: input string
 * Return: a pointer to the result string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
