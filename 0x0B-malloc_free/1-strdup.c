#include "main.h"
#include <stdlib.h>
/**
 * char *_strdup - allocate memory
 * @str: a string
 * Description: function returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * Return: a pointer
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *ar;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[size] != '\0')
		size++;

	ar = malloc(sizeof(char) * (size + 1));
	if (ar == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ar[i] = str[i];

	return (ar);
}