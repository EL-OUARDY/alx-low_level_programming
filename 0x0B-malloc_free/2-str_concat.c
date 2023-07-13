#include "main.h"
#include <stdlib.h>
/**
 * char *str_concat - concatenate two string
 * @s1: input string
 * @s2: input string
 * Description: allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 * Return: a pointer to the allocated memory space
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, size1, size2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = size2  = 0;
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	p = malloc(sizeof(char) * (size1 + size2 + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	for (i = 0; s2[i]; i++)
		p[i + size1] = s2[i];

	return (p);
}
