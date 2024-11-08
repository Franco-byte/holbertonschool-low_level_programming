#include "main.h"

/**
 * auxiliar - confirma si hay numeros primos
 * @n: nunmero a verificar
 * @i: iterador
 *
 * Return: Devuelve las condiciones para verificar n
 */
int auxiliar(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n != i && n % i == 0)
	{
		return (0);
	}
	else if (n == i && n % i == 0)
	{
		return (1);
	}
	return (auxiliar(n, i + 1));
}

/**
 * is_prime_number - Cetea la funcion en un inicio de 2
 * @n: numero a verificar
 *
 * Return: si es primo 1, sino 0
 */

int is_prime_number(int n)
{
	return (auxiliar(n, 2));
}
