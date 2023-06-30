#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: given string
 * Return: a pointer to the result string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char encoding[] = "4433007711";

	int codes_count = 10;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < codes_count; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = encoding[j];
			}
		}
	}

	return (str);
}
