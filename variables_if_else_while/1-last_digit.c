#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - impirmir ultimos numeros
 * Return: cero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_char = n % 10;

	if (last_char == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_char);
	else if (last_char > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, last_char);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_char)
	return (0);
}
