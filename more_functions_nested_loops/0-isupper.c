#include "main.h"

/**
 * _isupper - Reconoce mayusculas
 * @c: Caracter a analizar
 *
 * Return: ! si es mayuscula, 0 si es minuscula
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
