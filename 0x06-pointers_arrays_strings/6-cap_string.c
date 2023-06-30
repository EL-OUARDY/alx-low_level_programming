#include "main.h"

/**
 * *cap_string - Capitalize words
 * @str: input string
 * Return: a pointer to the result string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((i == 0) ||
			(str[i - 1] == ' ') ||
			(str[i - 1] == '\t') ||
			(str[i - 1] == '\n') ||
			(str[i - 1] == ',') ||
			(str[i - 1] == ';') ||
			(str[i - 1] == '.') ||
			(str[i - 1] == '!') ||
			(str[i - 1] == '?') ||
			(str[i - 1] == '"') ||
			(str[i - 1] == '(') ||
			(str[i - 1] == ')') ||
			(str[i - 1] == '{') ||
			(str[i - 1] == '}'))
				str[i] -= 32;
		}
		i++;
	}

	return (str);
}
