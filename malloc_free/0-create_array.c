#include "main.h"

/**
 * *create_array - Crea un puntero de tamaño size con contenido c
 * @size: tamaño del array
 * @c: contenido del array
 *
 * Return: NULL o el contenido recien copiado en array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
