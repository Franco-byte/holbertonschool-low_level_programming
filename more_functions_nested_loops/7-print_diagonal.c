#include "main.h"

/**
 * print_diagonal - Hace rallitas
 * @n: Cuantas rallitas hace
 *
 * Return: nada de nada
 */

void print_diagonal(int n)
{
	int a, espacio;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (espacio = 0; espacio < a; espacio++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
