#include "main.h"

/**
 * *_strstr - Buscar subcadenas
 * @haystack: Cadena principal
 * @needle: Cadena para comprobar la principal
 *
 * Return: Un puntero hacia los caracteres de haystack o NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i1, i2;

	for (i1 = 0; haystack[i1] != '\0'; i1++)
	{
		for (i2 = 0; needle[i2] != '\0'; i2++)
		{
			if (haystack[i1 + i2] != needle[i2])
			{
				break;
			}
		}
		if (needle[i2] == '\0')
		{
			return (&haystack[i1]);
		}
	}
	return (NULL);
}
