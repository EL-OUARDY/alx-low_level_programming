#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: array of passed arguments
 * Description: prints argc
 * Return: integer always 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
