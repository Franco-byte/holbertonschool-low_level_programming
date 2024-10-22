#include <stdio.h>

/**
 * main - Alfabeto al reves
 * Return: 0
 */

int main(void)
{
	int zyx;

	for (zyx = 'z'; zyx >= 'a'; zyx--)
		putchar(zyx);
	putchar('\n');

	return (0);
}
