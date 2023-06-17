#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - check the sign of agenerated random number
* @void: no args goes here
*
* Description: at the startup of the program a new random get generated
* Return: zero as a retcode
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n > 0)
		printf("%d is is positive\n", n);
	return (0);
}
