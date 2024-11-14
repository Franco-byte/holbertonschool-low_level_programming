#include "main.h"

/**
 * _strlen - cuenta caracteres
 * @p: string a contar
 *
 * Return: num
 */

unsigned int _strlen(char *p)
{
	unsigned int num = 0, i;

	for (i = 0; p[i] != '\0'; i++)
	{
		num++;
	}
	return (num);
}

/**
 * *string_nconcat - Concatena 2 strings
 * @s1: string uno
 * @s2: string dos
 * @n: maximo tama√o de caracteres para el string dos
 *
 * Return: arr con los strings unidos
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, i2, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < _strlen(s2))
	{
		limit = n;
		arr = malloc(_strlen(s1) + n + 1);
	}
	else
	{
		limit = _strlen(s2);
		arr = malloc(_strlen(s1) + _strlen(s2) + 1);
	}

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
		arr[i] = s1[i];
	
	for (i2 = 0; i2 < limit; i2++)
		arr[i + i2] = s2[i2];
	
	arr[i + limit] = '\0';
	return (arr);
}
