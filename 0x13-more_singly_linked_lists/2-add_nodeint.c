#include "lists.h"
/**
* add_nodeint - a function that adds a new node at
* the beginning of a listint_t list.
* @head: the head of the list.
* @n: an int
*  Return: The address of the new element
*         or NULL, if the function fails - NULL.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
