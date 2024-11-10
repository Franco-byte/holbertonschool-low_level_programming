#include "main.h"

/**
 * main - multiplica
 * @argc: cuenta argumentos
 * @argv: tiene los argumentos
 *
 * Return: cero
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);

		printf("%d\n", n1 * n2);
	}
	return (0);
}