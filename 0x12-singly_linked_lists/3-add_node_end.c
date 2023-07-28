#include "lists.h"
#include <string.h>
/**
 * add_node_end - Function to add a new node
 *                at the end of a list_t.
 * @head: A pointer to the head of the list_t
 * @str: The string to be added to the list_t
 * Return: NULL, if the function fails
 *         else - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *i;
	int len;
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	i = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = i;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}
