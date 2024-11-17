#include "dog.h"

/**
 * free_dog - Libera la memoria de un perro (estructura dog_t)
 * @d: puntero a la estructura de tipo dog_t
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
