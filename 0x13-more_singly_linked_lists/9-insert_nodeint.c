#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 *                           at a given position.
 * @head: A pointer to the address of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - index starts at 0.
 * @n: The integer for the new node to contain.
 * Return: The address of the new node
 *         or NULL, if the function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *i = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = i;
		*head = new_node;
		return (new_node);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (i == NULL || i->next == NULL)
		{
			return (NULL);
		}
		i = i->next;
	}
	new_node->next = i->next;
	i->next = new_node;

	return (new_node);
}
