#include "main.h"

/**
 * _isalpha - Detecta si hay letras o no
 * @c: variable desconocida
 *
 * Return: 0 o 1
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);

}
