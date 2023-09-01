#include <stdio.h>

/**
 * main - prints the argc
 * @argc: the counter of the passed arguments
 * @argv: arguments array
 * Description: output the number of passed arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
