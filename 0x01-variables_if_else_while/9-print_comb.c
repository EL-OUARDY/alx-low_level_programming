#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints all possible combinations of single-digit numbers
* @void: no args goes here
*
* Description: OUTPUT = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
* Return: zero as a retcode
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
