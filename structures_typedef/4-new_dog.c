#include "dog.h"

/**
 * *_strcpy - Copia contenido de un array a otro
 * @cpy: Destino de la copia
 * @orig: Tiene el contenido a copiar
 *
 * Return: dest
 */

char *_strcpy(char *cpy, char *orig)
{
	int i;

	for (i = 0; orig[i] != '\0'; i++)
		cpy[i] = orig[i];
	cpy[i] = '\0';

	return (cpy);
}

/**
 * _strlen - cuenta caracteres
 * @p: string a contar
 *
 * Return: num
 */

int _strlen(char *p)
{
	int num = 0, i;

	for (i = 0; p[i] != '\0'; i++)
		num++;
	return (num);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (dog_t), or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(_strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	_strcpy(name_copy, name);

	owner_copy = malloc(_strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	_strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
