#include "main.h"

/**
 *
 */

char *_strchr(char *s, char c)
{
	int iterador;

	for (iterador = 0; s[iterador] != '\0'; iterador++)
	{
		if (s[iterador] == c)
			return &s[iterador];
	}
	return (NULL);
}
