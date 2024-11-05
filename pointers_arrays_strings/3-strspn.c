#include "main.h"

/**
 * _strspn - Verifica si coinciden cadenas de caracteres
 * @s: Cadena s
 * @accept: Cadena accept
 *
 * Return: Cuantos caracteres coinciden entre las dos cadenas
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int contar = 0;
	int i1, i2;
	int encontrado;

	for (i1 = 0; s[i1] != '\0'; i1++)
	{
		encontrado = 0;

		for (i2 = 0; accept[i2] != '\0'; i2++)
		{
			if (s[i1] == accept[i2])
			{
				encontrado = 1;
				break;
			}
		}
		if (encontrado)
		{
			contar++;
		}
		else
		{
			break;
		}
	}
	return (contar);
}
