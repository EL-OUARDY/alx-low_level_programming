#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print a given name
 * @name: string to add
 * @f: a pointer to a function
 * Description: Print given name using a passed pointer function
 * Return: nothing -_-
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
