#include "main.h"
/**
 * jack_bauer - 24h game
 * @void: no argument
 * Description: starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int j;
	int k;
	int l;
	int m;

	for (j = 0; j <= 2; j++)
		for (k = 0; k <= 9; k++)
			if ((j <= 1 && k <= 9) || (j <= 2 && k <= 3))
			{
				for (l = 0; l <= 5; l++)
					for (m = 0; m <= 9; m++)
					{
						_putchar(j + '0');
						_putchar(k + '0');
						_putchar(58);
						_putchar(l + '0');
						_putchar(m + '0');
						_putchar('\n');

					}
			}
			else
				break;
}
