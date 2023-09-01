#include "main.h"

/**
 * char *_strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: integer - how many bytes to use from the src
 * Return: a pointer to the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int x = 0;

	while (*(dest + l) != '\0')
	{
		l++;
	}
	while (src[x] != '\0')
	{
		if (x >= n)
			break;
		dest[l + x] = src[x];
		x++;
	}
	dest[l + x] = '\0';
	return (dest);
}

