#include "main.h"

/**
 * char *_strcat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: a pointer to the dest string
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(dest + l) != '\0')
	{
		l++;
	}
	while (src[x] != '\0')
	{
		dest[l + x] = src[x];
		x++;
	}
	dest[l + x] = '\0';
	return (dest);
}

