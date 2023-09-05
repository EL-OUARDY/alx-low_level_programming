#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates function arguments
 * @ac: arguments count
 * @av: array of input arguments
 * Description: concatenates all arguments passed to the program into a string
 * Return: pointer to a string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int total_chars = 0, x = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Get total characters of our string*/
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			total_chars++;

	/* add new lines to string's total length*/
	total_chars += ac;

	/* allocate memory */
	str = malloc(sizeof(char) * total_chars + 1);

	if (str == NULL)
		return (NULL);

	/* concatenates args*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[x] = av[i][j];
			x++;
		}
		str[x++] = '\n';
	}

	return (str);
}
