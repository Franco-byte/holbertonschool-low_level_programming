#include "main.h"

/**
 * raiz_cuadrada - Condiciones para la raiz cuadrada
 * @i: numero a iterar
 * @n: numero base
 *
 * Return: EL bucle para hacer la raiz
 */

int raiz_cuadrada(int i, int n)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (raiz_cuadrada(i + 1, n));
	}
}

/**
 * _sqrt_recursion - Busca raiz cuadrada
 * @n: Valor n
 *
 * Return: la raiz cuadrada
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (raiz_cuadrada(0, n));
	}
}
