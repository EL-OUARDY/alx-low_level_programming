#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - function that prints everything
 * @format: types of arguments passed to the function
 * @...: given variable arguments
 * Description: prints all passed variable arguments regarding their type
 * Return: Nothing
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *string;
	char *sep = "";

	va_start(args, format);
	while (format[i])
	{
		if (i > 0)
			sep = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", sep, string);
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
