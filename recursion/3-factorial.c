#include "main.h"

/**
 * factorial - Calcula el resultado factorial de un numero
 * @n: El numero a calcular
 *
 * Return: 1, -1 y el factolial de n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
