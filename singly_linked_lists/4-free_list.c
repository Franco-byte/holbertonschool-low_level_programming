#include "lists.h"

/**
 * free_list - Free memory alocation for the list elements
 * @head: Pointer to the 'head' to the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	for (tmp = head; tmp->next != NULL; tmp = tmp->next)
	{
		free(tmp->str);
		free(tmp);
	}
}
