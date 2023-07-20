#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: a string to separate numbers
 * @n: the count of variable arguments
 * @...: given variable arguments to SUM
 * Description: prints all passed variable arguments
 * separated by a given separator
 * Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	const char *sep = separator != NULL ? separator : "";

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1))
			printf("%s", sep);
	}
	printf("\n");
	va_end(args);
}
