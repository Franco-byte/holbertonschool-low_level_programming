#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * struct dog - Estructura que describe un perro
 * @name: Nombre del perro (tipo char *)
 * @age: Edad del perro (tipo float)
 * @owner: Nombre del dueño (tipo char *)
 *
 * Descripción: Una structura para almacenar información básica
 * sobre un perro y su dueño.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
