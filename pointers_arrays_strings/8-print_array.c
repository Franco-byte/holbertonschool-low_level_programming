#include "main.h"

/**
 * print_array - imprime n lugares de un string
 * @a: Ubicacion del string
 * @n: Cantidad de espacios a imprimir
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
