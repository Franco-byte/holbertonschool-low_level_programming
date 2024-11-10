#include "main.h"

/**
 * *_strcpy - Copia contenido de un array a otro
 * @dest: Destino de la copia
 * @src: Tiene el contenido a copiar
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
