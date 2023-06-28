#include "main.h"

/**
* swap_int - swap the value of two given integers
* @a: a pointer to a variable passed as an argument
* @b: a pointer to b variable passed as an argument
* return: nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
