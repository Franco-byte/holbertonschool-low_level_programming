#include "main.h"

/**
 * print_rev - imprimir string en reversa
 * @s: la string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int var;

	for (var = 0; s[var] != '\0'; var++)
	{
	}

	for (var = var - 1; var >= 0; var--)
	{
		_putchar(s[var]);
	}
	_putchar('\n');
}
