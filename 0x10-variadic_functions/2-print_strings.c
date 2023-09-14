#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints variable arg strings
 * @separator: a string to separate numbers
 * @n: variable arguments count
 * @...: variable arguments
 * Description: prints all passed string variable arguments
 * separated by the given separator
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *_string;
	va_list args;

	const char *sep = separator != NULL ? separator : "";

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		_string = va_arg(args, char *);
		/* check variable arg */
		_string = (_string != NULL) ? _string : "(nil)";

		printf("%s", _string);

		/* prevent printing the separator at the end */
		if (i != (n - 1))
			printf("%s", sep);
	}
	printf("\n");
	va_end(args);
}

