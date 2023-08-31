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
