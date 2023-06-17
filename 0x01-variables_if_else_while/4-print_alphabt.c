#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints the alphabet in lowercase except q and e
* @void: no args goes here
*
* Description: Print all alphabets except the evil q and e
* Return: zero as a retcode
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
