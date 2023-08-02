#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t list.
 * @head: A pointer to the address of the list_t list.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *acc, *rev;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	rev = NULL;

	while ((*head)->next != NULL)
	{
		acc = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = acc;
	}
	(*head)->next = rev;

	return (*head);
}
