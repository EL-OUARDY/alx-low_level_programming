#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates args
 * @ac: argument count
 * @av: array of arguments
 * Description: concatenates all arguments passed to the program
 * Return: a string pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int total_length = 0, x = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Get total characters of our string*/
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			total_length++;
	/* add new lines to string's total length*/
	total_length += ac;

	str = malloc(sizeof(char) * total_length + 1);

	if (str == NULL)
		return (NULL);

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
