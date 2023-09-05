#include "main.h"
#include <stdlib.h>
/**
 * char *_strdup - allocate memory for a string
 * @str: a given string
 * Description: returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * Return: a pointer to the created string
 */
char *_strdup(char *str)
{
	unsigned int i = 0, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	/* get the size of the array */
	while (str[size] != '\0')
		size++;

	/* allocate memory for the new string */
	ptr = (char *) malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);

	/* copy string */
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	return (ptr);
}
