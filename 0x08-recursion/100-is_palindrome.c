#include "main.h"

int is_palindrome_helper(char *s, int start, int end);
int _strlen(char *s);

/**
 * is_palindrome - check if a string is a palindrome, using recursion
 * @s: given string
 * Return: integer (1 if it is and 0 if it is not!)
 */
int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);

	int start = 0;
	int end = _strlen(s);

	return (is_palindrome_helper(s, start, end));
}

/**
 * is_palindrome_helper - find out if a string is palindrome, using recursion
 * @s: given string
 * @start: iterator starts form the beginning of the string
 * @end: iterator starts form the end of the string
 * Return: integer (1 true | 0 false)
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);

	/* iteration reached the middle of the string means string is palindrome*/
	if (start >= end)
		return (1);

	return (is_palindrome_helper(s, ++start, --end));
}

/**
 * _strlen - output the length of a string
 * @s: a pointer to a char passed as an argument
 * Return: int - the lenght of the given string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}
	return (l);
}
