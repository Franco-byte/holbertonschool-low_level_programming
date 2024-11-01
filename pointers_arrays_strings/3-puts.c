#include "main.h"

/**
 * _puts - Print the string str
 * @str: Contain the text
 *
 * Return: nada
 */

void _puts(char *str)
{
	int var;

	for (var = 0; str[var] != '\0'; var++)
	{
		_putchar(str[var]);
	}
	_putchar('\n');
}
