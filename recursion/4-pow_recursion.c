#include "main.h"

/**
 * _pow_recursion - Dal el factorial de un numero dado
 * @x: Numero 1
 * @y: Numero 2
 *
 * Return: El factorial de x * y o -1
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
