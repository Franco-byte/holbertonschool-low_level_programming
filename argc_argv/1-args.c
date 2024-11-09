#include "main.h"

/**
 * main - imprime argumentos
 * @argc: cuenta los argumentos
 * @argv: almacena los argumentos
 *
 * Return: cero
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	argc = argc - 1;

	printf("%d\n", argc);
	return (0);
}
