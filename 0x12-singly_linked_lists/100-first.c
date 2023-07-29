#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void Constructor(void) __attribute__((constructor));

/**
 * Constructor - Triggered before the main()
 * Description: get executed before main function
 * Return: nothing
*/
void Constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore ");
	printf("my house upon my back!\n");
}
