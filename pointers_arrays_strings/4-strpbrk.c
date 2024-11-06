#include "main.h"

/**
 * *_strpbrk - Imprime caracteres seugun una plantilla
 * @s: Cadena a revisar
 * @accept: plantilla
 *
 * Rewturn: pointer de los caracteres o NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i1, i2;

	for (i1 = 0; s[i1] != '\0'; i1++)
	{

		for (i1 = 0; accept[i2] != '\0'; i2++)
		{
			if (s[i1] == accept[i2])
			{
				return (&s[i1]);
			}
		}
	}
	return (NULL);
}
