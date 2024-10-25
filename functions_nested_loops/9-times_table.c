#include "main.h"

/**
 * times_table - tablas matematicas
 * Return: tablas
 */

void times_table(void)
{
	int m, mx, result;

	for (m = 0; m <= 9; m++)
	{
		for (mx = 0; mx <= 9; mx++)
		{
		result = m * mx;
			if (result < 10)
			{
				if (mx != 0)
				{
				_putchar(' ');
				}
				_putchar(result + '0');
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}

				if (mx < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
		}
	_putchar('\n');
	}
}
