#include "main.h"

/**
 * main - imprime argumentos
 * @argc: cuenta rgumentos
 * @argv: almacena los argumentos
 
 * Return: cero
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
