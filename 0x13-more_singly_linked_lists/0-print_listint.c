#include "lists.h"
/**
* print_listint - a function that prints all the nodes.
* @h: the head of the list.
* Return: The number of nodes in the program.
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
