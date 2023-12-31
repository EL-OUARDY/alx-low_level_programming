#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - print the last digit of a number
* @void: no args goes here
*
* Description: at the startup of the program a new random get generated
* Then the program extract from it the last digit
* Return: zero as a retcode
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
