#include "main.h"

/**
* print_numbers - prints numbers from 0 to 9 except 2 and 4
* @void: no argument passed
* return: nothing
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
