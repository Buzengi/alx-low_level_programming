#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a structure of type dog
 * @d: a pointer to the the dog struct
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	
	free(d->owner);
	free(d->name);
	free(d);
}
