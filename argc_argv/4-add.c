#include "main.h"

/**
 * main - Suma varios argumentos
 * @argc: Cuenta los argumentos dentro de argv
 * @argv: posee los argumentos
 *
 * Return: 0 y 1
 */

int main(int argc, char *argv[])
{
	int suma = 0;
	int i1, i2;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i1 = 1; i1 < argc; i1++)
	{
		char *p = argv[i1];

		for (i2 = 0; p[i2] != '\0'; i2++)
		{
			if (!isdigit(p[i2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		suma += atoi(p);
	}
	printf("%d\n", suma);
	return (0);
}
