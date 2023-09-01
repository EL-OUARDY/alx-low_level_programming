#include <stdio.h>

/**
 * main - prints arguments
 * @argc: the counter of the passed arguments
 * @argv: arguments array
 * Description: output all passed argument one per line
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
