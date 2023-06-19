#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - takes a pointer to a dog_t object as an argument
 * @d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
