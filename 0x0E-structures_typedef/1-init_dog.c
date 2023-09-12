#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize given dog struct
 * @d: target struct to initialize
 * @name: struct member
 * @age: struct member
 * @owner: struct member
 * Description: initialize all members of dog struct
 * Return: nothing -_-
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* check passed struct */
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	/* assign fileds */
	d->name = name;
	d->age = age;
	d->owner = owner;
}

