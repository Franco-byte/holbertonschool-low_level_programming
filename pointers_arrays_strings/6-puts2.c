#include "main.h"

/**
 * puts2 - Imprime la posicion 0 y las pares
 * @str: Donde esta la cadena a imprimr
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
