#include <stdio.h>

/**
 * main - Imprimir abecedario
 * Return: 0
 */

int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
	putchar(abc);
	}
	putchar('\n');

	return (0);
}
