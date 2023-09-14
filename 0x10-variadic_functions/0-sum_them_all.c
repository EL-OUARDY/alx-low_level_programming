#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum the arguments
 * @n: the total number of arguments passed
 * Description: calculate the sum of all arguments
 * Return: integer
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	/* point to the first argument passed */
	va_start(args, n);

	/* loop over arguments */
	for (i = 0; i < n; i++)
	{
		/* add to the sum */
		sum += va_arg(args, int);
	}

	/* clean up */
	va_end(args);

	return (sum);
}
