#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int check_num(char *str);

/**
 * main - return sum of positive numbers passed as arguments
 * @argc: count of arguments
 * @argv: arguments
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int i;
	int digit;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			digit = atoi(argv[i]);
			sum += digit;
		}

		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * check_num - check if there are digits in a string
 * @str: string
 *
 * Return: 1 true, 0 false
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);

		count++;
	}
	return (1);
}
