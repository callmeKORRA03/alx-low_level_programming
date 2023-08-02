#include "lists.h"

/**
 * free_listint2 - Function thaat frees a listint_t list.
 * @head: A pointer to the address of the listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
