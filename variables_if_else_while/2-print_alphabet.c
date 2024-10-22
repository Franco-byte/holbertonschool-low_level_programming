#include <stdio.h>

/**
 * main - Imprimir abecedario
 * Return: zero again
 */

int main(void)
{
	char abc;

	for (char abc = 'a'; abc <= 'z'; abc++)
	{
	putchar(abc);
	}
	putchar('\n');

	return (0);
}
