#include "main.h"

/**
 * array_range - Crea un array con valores consecutivos
 * @min: valor mninimo
 * @max: valor maximo
 *
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min + i;

	return (arr);
}
