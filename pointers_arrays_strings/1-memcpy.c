#include "main.h"

/**
 * *_memcpy - Copiar datos
 * @dest: Contiene buffer1
 * @src: Contiene buffer2
 * @n: Hasta donde copia src en dest
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
