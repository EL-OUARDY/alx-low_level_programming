#include <stdio.h>

int StringToNumber(const char *str);

/**
 * main - multiply two numbers
 * @argc: the counter of the passed arguments
 * @argv: arguments array
 * Description: return the product of two arguments
 * Return: 0 if success 1 if error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = (StringToNumber(argv[1]) * StringToNumber(argv[2]));
	printf("%d\n", result);
	return (0);
}

/**
 * StringToNumber - converts a string to an integer
 * @str: string to be converted
 * Description: take a string and return an integer
 * Return: converted integer OR 0 if it fails
 */
int StringToNumber(const char *str)
{
	int result = 0;
	int sign = 1;

	/* Handle negative sign if present */
	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	/* Iterate through the characters in the string */
	while (*str != '\0')
	{
		/* Check if the character is a digit */
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
		} else
		{
			/* Invalid character encountered */
			return (0);
		}
		str++;
	}

	return (result * sign);
}
