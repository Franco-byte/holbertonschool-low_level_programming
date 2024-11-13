#include "main.h"

/**
 * alloc_grid - crea un array bidimencional
 * @width: ancho de la "tabla"
 * @height: altura de la "tabla"
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **pointer;
	int filas, columnas;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	pointer = (int **)malloc(height * sizeof(int *));

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (filas = 0; filas < height; filas++)
	{
		pointer[filas] = (int *)malloc(width * sizeof(int));

		if (pointer[filas] == NULL)
		{
			for (columnas = 0; columnas < filas; columnas++)
			{
				free(pointer[columnas]);
			}
			free(pointer);
			return (NULL);
		}

		for (columnas = 0; columnas < width; columnas++)
		{
			pointer[filas][columnas] = 0;
		}
	}
	return (pointer);
}
