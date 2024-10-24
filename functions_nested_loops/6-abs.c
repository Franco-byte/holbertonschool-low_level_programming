#include "main.h"

/**
 * _abs - Numeros absolutos
 *@num: variable para el numero absoluto
 *
 * Return: el numero absoluto en positivo
 */

int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
