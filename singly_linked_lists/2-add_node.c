#include "lists.h"

/**
 *
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodes = malloc(sizeof(list_t));

	if (new_nodes == NULL)
		return (NULL);

	list_t *new_nodes = strdup(str);

