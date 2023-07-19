#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize given dog struct
 * @d: target struct to initialize
 * @name: struct member
 * @age: struct member
 * @owner: struct member
 * Description: initialize all member of dog struct
 * Return: Always nothing -_-
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
