#include "main.h"

/**
 * *_calloc - Asigna espacios de memoria para un array
 * @nmemb: cantidad de elementos
 * @size: ramaño en byte
 *
 * Return: p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
