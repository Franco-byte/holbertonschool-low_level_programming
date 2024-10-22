#include <stdio.h>

/**
 * main - imprimir abecedario minuscula y mayuscula
 * Return: 0
 */

int main(void)
{
	int abc, ABC;

	for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);
	for (ABC = 'A'; ABC <= 'Z'; ABC++)
		putchar(ABC);
	putchar('\n');

		return (0);
}
