#include "main.h"

/**
 * _strlen - cuenta caracteres
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
 * *_strdup - Duplica contenido siguiendo el almacenamiento de memoria
 * @str: Puntero hacia el string a duplicar
 *
 * Return: NULL o el string duplicado
 */

char *_strdup(char *str)
{
	char *arr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	arr = (char *)malloc(_strlen(str) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}
