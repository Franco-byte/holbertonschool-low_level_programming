#include <stdio.h>

/**
 * main - Numeros del 0 al 9
 * Return: 0
 */

int main(void)
{
	int nmbrs;

	for (nmbrs = '0'; nmbrs <= '9'; nmbrs++)
		putchar(nmbrs);
	putchar('\n');

	return (0);
}

