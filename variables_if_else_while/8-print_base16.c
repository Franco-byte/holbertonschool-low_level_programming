#include <stdio.h>

/**
 * main - 0 a f en hexadecimal
 * Return: 0
 */

int main(void)
{
	int hex, hex2;

	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);
	for (hex2 = 'a'; hex2 <= 'f'; hex2++)
		putchar(hex2);
	putchar('\n');

	return (0);
}
