#include "main.h"

/**
 * more_numbers - impirme los numeros 10 veces
 * Return: nada
 */

void more_numbers(void)
{
	int num, bucle;
	char a[] = "01234567891011121314";

	for (bucle = 0; bucle <= 9; bucle++)
	{
		for (num = 0; a[num] != '\0'; num++)
		{
			_putchar(a[num]);
		}
	_putchar('\n');
	}
}
