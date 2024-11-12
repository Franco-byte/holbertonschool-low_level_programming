#include "main.h"

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

	arr = (char *)malloc(strlen(str) + 1);

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
