#include "lists.h"
#include <string.h>
/**
 * add_node - function to add a new node at the
 *            beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added
 * Return: NULL If the function fails
 *         else - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int len;
	char *_str;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	_str = strdup(str);
	if (_str == NULL)
	{
		free(n);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	n->str = _str;
	n->len = len;
	n->next = *head;

	*head = n;
	return (n);
}
