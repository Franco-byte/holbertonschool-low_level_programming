#include "main.h"

/**
 * *_strchr - Localizar caracteres de la string
 * @s: El string
 * @c: El caracter a encontrar
 *
 *Return: el caracter o nada
 */

char *_strchr(char *s, char c)
{
	int iterador;

	for (iterador = 0; s[iterador] != '\0'; iterador++)
	{
		if (s[iterador] == c)
			return (&s[iterador]);
	}
	return (NULL);
}
