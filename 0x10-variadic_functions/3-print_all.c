#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: variable arguments
 * Description: prints all passed variable arguments using the format provided
 * Return: void
 */
void print_all(const char *const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *separator = "", *string_va;

	va_start(args, format);

	if (format)
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				/* character */
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				/* integer */
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				/* float */
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				/* string */
				string_va = va_arg(args, char *);
				if (string_va == NULL)
					string_va = "(nil)";
				printf("%s%s", separator, string_va);
				break;
			default:
				i++;
				continue;
			}
			/* set separator after 1st loop */
			separator = ", ";
			i++;
		}
	printf("\n");
	va_end(args);
}
