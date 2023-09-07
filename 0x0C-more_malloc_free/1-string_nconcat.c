#include "main.h"
#include <stdlib.h>
/**
 * char *string_nconcat - concatenates two strings
 * @s1: first input string
 * @s2: first input string
 * @n: number of bytes to take from s2
 * Description: concatenate two strings using just the @n characters of @s2
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, length = 0, l1 = 0, l2 = 0;

	/* get s1 and s2 length */
	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	/* take the whole s2 length if n is greater than s2 length */
	if (n < l2)
		length = (l1 + n + 1);
	else
		length = (l1 + l2 + 1);

	/* allocate memory */
	str = malloc(sizeof(char) * length);

	/* handle potential error */
	if (!str)
		return (NULL);

	/* copying s1 to the string*/
	while (i < l1)
	{
		str[i] = s1[i];
		i++;
	}

	/* copying s2 to the string*/
	while (n < l2 && i < (l1 + n))
		str[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		str[i++] = s2[j++];

	/* add null termination */
	str[i] = '\0';

	return (str);
}
