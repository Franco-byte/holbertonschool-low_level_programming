#include "main.h"

/**
 * _strlen - cuenta caracteres
 * @p: string a contar
 *
 * Return: num
 */

int _strlen(char *p)
{
	unsigned int num = 0, i;

	for (i = 0; p[i] != '\0'; i++)
	{
		num++;
	}
	return (num);
}

/**
 *
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, i2, i3, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < _strlen(s2)
		limit = n;
		arr = malloc(_strlen(s1) + n + 1);
	else
		limit = _strlen(s2);
		arr = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
		arr[i] = s1[i];
	
	if (n < _strlen(s2))
	{
		for (i3 = 0; i3 < n; i3++)
			arr[i + i3] = s2[i3];
	}
	else
	{
		for (i2 = 0; i2 < _strlen(s2); i2++)
			arr[i + i2] = s2[i2];
	}
	arr[i + limit] = '\0';
	return (arr);
}
