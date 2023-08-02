#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the listint_t list.
 * @index: The index of the node to be deleted. index starts at 0.
 * Return: 1, on success
 *        -1, on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *i = *head;
	unsigned int node;

	if (i == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(i);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (i->next == NULL)
		{
			return (-1);
		}
		i = i->next;
	}
	temp = i->next;
	i->next = temp->next;
	free(temp);
	return (1);
}
