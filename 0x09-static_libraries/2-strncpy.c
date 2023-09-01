#include "main.h"

/**
 * _strncpy - copy a string from source to destination
 * @dest: destination
 * @src: source
 * @n: interger define how many char to take from src string
 * Return: a pointer to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

