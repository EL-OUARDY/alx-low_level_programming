#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints all the numbers of base 16 in lowercase
* @void: no args goes here
*
* Description: print base 16 numbers AKA Hexa Decimal
* Return: zero as a retcode
*/
int main(void)
{
	int n = 0;
	int l = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (l < 6)
	{
		char letter = l + 'a';

		putchar(letter);
		l++;
	}
	putchar('\n');
	return (0);
}
