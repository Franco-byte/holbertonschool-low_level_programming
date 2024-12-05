#include "lists.h"

/**
 * list_len -  Count the number of times the loop goes through a node
 * @h: Point to element of the list
 *
 * Return: Return the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
