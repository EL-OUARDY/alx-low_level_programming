#include "main.h"
#include <stdlib.h>
/**
 * char *str_concat - concatenates two strings
 * @s1: first input string
 * @s2: second input string
 * Description: allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 * Return: a pointer to the created string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, size1 = 0, size2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get the size of the input strings */
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	/* allocate required memory */
	ptr = (char *) malloc(sizeof(char) * (size1 + size2 + 1));
	if (ptr == NULL)
		return (NULL);

	/* fill new space with the two strings */
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (i = 0; s2[i]; i++)
		ptr[i + size1] = s2[i];

	return (ptr);
}
