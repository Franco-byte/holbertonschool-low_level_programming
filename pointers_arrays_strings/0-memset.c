#include "main.h"

/**
 * *_memset - Espacios de memoria
 * @s: Espacio de memoria
 * @b: Variable con el contenido
 * @n: numero de veces que se repite b en s
 *
 * Return: El contenido de s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		n--;
		p++;
	}
	return (s);
}
