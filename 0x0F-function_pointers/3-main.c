#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Calculator Program
 * @argc: number of arguments passed
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int number1, number2;
	char *operator;

	/* check argumenets existance */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* get arguments values*/
	number1 = atoi(argv[1]);
	operator = argv[2];
	number2 = atoi(argv[3]);

	/* validate arguments */
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && number2 == 0) || (*operator == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* output the result */
	printf("%d\n", get_op_func(operator)(number1, number2));

	return (0);
}

