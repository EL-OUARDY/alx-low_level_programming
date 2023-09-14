#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to execute
 * based on the user choice
 * @s: operator sign argument
 * Return: A pointer to the corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
	int index = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	/* loop over operators to find a match */
	while (ops[index].op != NULL && *(ops[index].op) != *s)
		index++;

	return (ops[index].f);
}

