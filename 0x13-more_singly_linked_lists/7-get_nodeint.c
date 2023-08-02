#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 *                        a listint_t linked list.
 * @head: A pointer to the listint_t list
 * @index: The index of the node, starting at 0.
 * Return: The located node
 *         NULL, if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
