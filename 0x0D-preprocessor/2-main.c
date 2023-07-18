#include <stdio.h>

/**
 * main - Where am I?
 * description: prints the name of the file it was compiled from
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
