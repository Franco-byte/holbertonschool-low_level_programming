#include "dog.h"

/**
 * init_dog - Inicializa una variable de tipo struct dog
 * @d: puntero a la estructura a inicializar
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: nombre del dueño
 *
 * Descripción: Asigna los valores proporcionados a los campos
 * de la estructura struct dog apuntada por d.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
