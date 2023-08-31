#include "main.h"

int _strlen_recursion(char *s);
int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - check if a string is a palindrome, using recursion
 * @s: given string
 * Return: integer (1 if it is and 0 if it is not!)
 */
int is_palindrome(char *s)
{
	int start, end;

	if (s[0] == '\0')
		return (1);

	start = 0;
	end = (_strlen_recursion(s) - 1);

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
 * _strlen_recursion - count how many characters in a string, using recursion.
 * @s: source string to work on it
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(++s));
}
