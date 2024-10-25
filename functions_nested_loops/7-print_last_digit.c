#include "main.h"

/**
 * print_last_digit - imprimir ultimo digito
 * @n: variable externa
 *
 * Return: last character
 */

int print_last_digit(int n)
{

	int last_char = n % 10;

	if (last_char < 0)
		last_char = -last_char;

	_putchar(last_char + '0');

	return (last_char);
}
