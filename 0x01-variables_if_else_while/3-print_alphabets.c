#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints the alphabet in lowercase then in UPPERCASE
* @void: no args goes here
*
* Description: Print all alphabets
* Return: zero as a retcode
*/
int main(void)
{

	char alphabet = 'a';
	char alphabetX = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (alphabetX <= 'Z')
	{
		putchar(alphabetX);
		alphabetX++;
	}
	putchar('\n');
	return (0);
}
