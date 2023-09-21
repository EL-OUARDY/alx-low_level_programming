#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void Constructor(void) __attribute__((constructor));

/**
 * Constructor - triggered before the main()
 * Description: function get called when program run before main()
 * Return: void
 */
void Constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore ");
	printf("my house upon my back!\n");
}

