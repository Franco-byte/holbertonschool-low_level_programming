#include "main.h"

/**
 * rev_string - Invierte el valor de una string
 * @s: la string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *final = s;
	char *comienzo = s;
	char aux;

	for (; *final != '\0'; final++)
	{
	}

	final--;

	for (; comienzo < final; comienzo++, final--)
	{
		aux = *comienzo;
		*comienzo = *final;
		*final = aux;
	}
}
