#include <stdio.h>

/**
 * main - del 0 al 9 pero mas dificil
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');

		return (0);
}
