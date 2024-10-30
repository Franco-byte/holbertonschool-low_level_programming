#include "main.h"

/**
 *
 */

void print_line(int n)
{
	int inicio;

	if (n >= 1)
	{
		for (inicio = 0; inicio < n; inicio++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
