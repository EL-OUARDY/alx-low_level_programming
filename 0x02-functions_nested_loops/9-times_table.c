#include "main.h"
/**
 * times_table - print the 9 time table
 * @void: no argument
 * Description: starting from 0
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	int z = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x > 9)
			{
				y = x % 10;
				z = (x - y) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(z + '0');
				_putchar(y + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(x + '0');
			}
		}
	_putchar('\n');
	}
}
