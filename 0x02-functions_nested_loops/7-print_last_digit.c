#include "main.h"
/**
 * print_last_digit - last degiti of a number
 * @n: integer is passed as an argument
 * Description: print the last degit of a given number
 * Return: int
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	}
		/* in case the given number is negative */
		last = last * -1;
	}
return (last);
}
