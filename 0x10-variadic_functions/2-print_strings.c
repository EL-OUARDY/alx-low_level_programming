#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings
 * @separator: a string to separate numbers
 * @n: the count of variable arguments
 * @...: given string variable arguments to SUM
 * Description: prints all passed string variable arguments
 * separated by a given separator
 * Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list args;

	const char *sep = separator != NULL ? separator : "";

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		string = (string != NULL) ? string : "(nil)";

		printf("%s", string);

		if (i != (n - 1))
			printf("%s", sep);
	}
	printf("\n");
	va_end(args);
}
