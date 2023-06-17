#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints the alphabet in lowercase
* @void: no args goes here
*
* Description: Print all alphabets
* Return: zero as a retcode
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
