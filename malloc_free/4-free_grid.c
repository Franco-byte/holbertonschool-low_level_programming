#include "main.h"

/**
 * free_grid - libera un array bidimencional
 * @grid: La tabla
 * @height: Tama√o de la tabla
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
