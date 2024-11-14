#include "main.h"

/**
 * *malloc_checked - Crea punteros a direcciones de memoria
 * @b: tama√o de bites de la memoria
 *
 * Return: El puntero a la direccion de memoria
 */

void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}
