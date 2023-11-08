#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - allocated for a struct dog memory
 * @d: dog to free with struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
