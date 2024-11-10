#include "main.h"

/**
 * puts_half - Imprime la ultima mitad de un string
 * @str: el string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int lar = 0;
	int start, i;

	for (; str[lar] != '\0'; lar++)
	{
	}

	if (lar % 2 == 0)
	{
		start = lar / 2;
	}
	else
	{
		start = (lar / 2) + 1;
	}

	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
