#include "main.h"

/**
* more_numbers - prints numbers from 0 to 9 ten times line by line
* @void: no argument passed
* return: nothing
*/
void more_numbers(void)
{
	int i;
	int j = 10;
	int a;
	int n = 48;

	/* loop 10 time  */
	while (j--)
	{
		/* print 0 to 9 and add extra 5 loops to print from 10 to 14*/
		for (i = 48; i <= (57 + 5); i++)
		{
			/* once the loop index reached 10 it stops at 1*/
			a = (i > 57) ? 49 : i;
			_putchar(a);

			/* to print units of 10 to 14*/
			if (i > 57)
				_putchar(n++);
		}
		_putchar('\n');
		/* reset n */
		n = 48;
	}
}
