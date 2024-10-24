#include "main.h"

/**
 * print_alphabet - imprimir alfabeto
 * Return: cero
 */

void print_alphabet(void)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - alfabeto 10 veces
 * Return: cero
 */

void print_alphabet_x10(void)
{
	int abc;

	for (abc = '0'; abc <= '9'; abc++)
	{
		print_alphabet();
	}
}
