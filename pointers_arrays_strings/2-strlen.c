#include "main.h"

/**
 * _strlen - Contar cadenas de tring
 * @str: no lo entiendo bn
 *
 * Return: zero
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	;
	return (len);
}
