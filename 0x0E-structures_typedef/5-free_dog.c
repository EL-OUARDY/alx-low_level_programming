#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the kidnapped dog -_-
 * @d: target struct to initialize
 * Description: free a given instance of ldog struct
 * Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
