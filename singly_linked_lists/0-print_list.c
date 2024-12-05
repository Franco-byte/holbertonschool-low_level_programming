#include "lists.h"

/**
 * print_list - Print the nodes of linked lists
 * @h: Pints to the nodes to use in the funcion
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			count++;
		}
	}
	return (count);
}
