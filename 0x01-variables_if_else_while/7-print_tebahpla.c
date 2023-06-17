#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints the alphabet in lowercase in reverse order
* @void: no args goes here
*
* Description: Print all alphabets
* Return: zero as a retcode
*/
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
