#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the kidnapped dog -_-
 * @d: target struct to be freed
 * Description: free a given instance of dog_t struct
 * Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* release name field */
		free(d->name);
		/* release owner field */
		free(d->owner);
		/* release strut allocated memory */
		free(d);
	}
}
