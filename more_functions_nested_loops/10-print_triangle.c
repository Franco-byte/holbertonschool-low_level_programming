#include "main.h"

/**
 * print_triangle - Print a triangle xd
 * @size: The size of the triangle
 *
 * Return: zero
 */

void print_triangle(int size)
{
	int lineas, espacios, numeral;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (lineas = 1; lineas <= size; lineas++)
	{
		for (espacios = 0; espacios < size - lineas; espacios++)
		{
			_putchar(' ');
		}

		for (numeral = 0; numeral < lineas; numeral++)
		{
			_putchar('#');
		}

	_putchar('\n');
	}
}
