#include <stdio.h>

/**
 * main - prints the program name
 * @argc: the counter of the passed arguments
 * @argv: arguments array
 * Description: display the program name in the console
 * Return: always 0 (success)
 */
int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
