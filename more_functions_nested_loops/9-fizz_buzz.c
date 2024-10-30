#include <stdio.h>

/**
 * main - "Fizz-Buzz" test
 * Return: nathing
 */

int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", num);
		}

		if (num < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
