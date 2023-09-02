#include <stdio.h>
#include <stdlib.h>
/**
 * main - change caculator
 * @argc: the counter of the passed arguments
 * @argv: arguments array
 * Description: calculate the minimum number of coins to make change
 * Return: 0 if success 1 if error
 */
int main(int argc, char *argv[])
{
	int num_coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (num_coins = 0; cents > 0; num_coins++)
	{
		if (cents - 25 >= 0)
			cents = cents - 25;
		else if (cents - 10 >= 0)
			cents = cents - 10;
		else if (cents - 5 >= 0)
			cents = cents - 5;
		else if (cents - 2 >= 0)
			cents = cents - 2;
		else if (cents - 1 >= 0)
			cents = cents - 1;
	}

	printf("%d\n", num_coins);
	return (0);
}
