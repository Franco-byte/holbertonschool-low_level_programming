#include "main.h"

/**
 * print_square - Print numeral digit
 * @size: Number of digit
 *
 * Return: nathing
 */

void print_square(int size)
{
	int lineas, digitos;

	if (size >= 1)
	{
		for (lineas = 1; lineas <= size; lineas++)
		{
			for (digitos = 1; digitos <= size; digitos++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
