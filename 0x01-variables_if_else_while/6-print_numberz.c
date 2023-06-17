#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints all single digit numbers of base 10
* starting from 0 using putchar
* @void: no args goes here
*
* Description: OUTPUT = 0123456789
* Return: zero as a retcode
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
