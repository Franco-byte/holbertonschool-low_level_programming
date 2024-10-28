#include "main.h"

/**
 * _isdigit - Reconoce digitos
 * @c: Cararacter a reconocer
 *
 * Return: 1 si es un digito, 0 si no lo es
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
