#include "lists.h"

/**
 * add_node - Add a new node to an existing list
 * @head: Pointer to pointer to 'head' list
 * @str: Element to copy for the new node
 *
 * Return: The address to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
