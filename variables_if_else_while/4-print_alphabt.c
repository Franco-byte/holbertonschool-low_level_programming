#include <stdio.h>

/**
 * main - saltearse letras en el abecedario
 * Return: 0
 */

int main(void)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc == 'e')
			continue;
		else if (abc == 'q')
			continue;
		putchar(abc);
	}
		putchar('\n');

	return (0);
}