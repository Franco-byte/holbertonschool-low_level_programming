#include <stdio.h>

/**
 * print_to_98 - Va hacia el 98
 * @n: Numero de inicio 
 *
 * Return: nada
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n !=98)
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			printf(", ");
		}
	printf("\n");
	}
}
