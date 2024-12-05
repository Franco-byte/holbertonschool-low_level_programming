#include "lists.h"

/**
 * add_node_end - Add a new element to the end of de list
 * @head: Pointer to pointer to 'head' of the list
 * @str: Pointer to element str
 *
 * Return: Address tu new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int  i, count = 0;
	list_t *tmp;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->next = NULL;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new_node->len = count;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	for (tmp = *head; tmp->next != NULL; tmp = tmp->next)
		;

	tmp->next = new_node;

	return (new_node);
}
