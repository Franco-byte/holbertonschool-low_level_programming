#include "main.h"

/**
 * _strlen_recursion - Cuenta caracteres de un string
 * @s: El string a analizar
 *
 * Return: La cantidad de de caracteres del string
 */

int _strlen_recursion(char *s)
{
	int contador = 0;

	if (*s != '\0')
	{
		contador = _strlen_recursion(s + 1);
		contador++;
	}
	return (contador);
}
