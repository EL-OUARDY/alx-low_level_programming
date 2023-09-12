#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints dog struct
 * @d: target struct to be printed
 * Description: print all members of dog struct
 * Return: nothing -_-
 */
void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d == NULL)
		return;

	name = (d->name ? d->name : "(nil)");
	owner = (d->owner ? d->owner : "(nil)");

	printf("Name: %s\n", name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", owner);
}

