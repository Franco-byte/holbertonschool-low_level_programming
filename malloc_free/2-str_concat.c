#include "main.h"

/**
 * _strlen - cienta caracteres
 * @p: string a contar
 *
 * Return: num
 */

int _strlen(char *p)
{
	int num = 0, i;

	for (i = 0; p[i] != '\0'; i++)
	{
		num++;
	}
	return (num);
}

/**
 * *str_concat - concatena 2 strings
 * @s1: primera string
 * @s2: segunda string
 *
 * Return: arr
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, i2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	arr = (char *)malloc(_strlen(s1) + _strlen(s2) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < _strlen(s1); i++)
	{
		arr[i] = s1[i];
	}
	for (i2 = 0; i2 < _strlen(s2); i2++)
	{
		arr[i + i2] = s2[i2];
	}
	arr[i + i2] = '\0';
	return (arr);
}
