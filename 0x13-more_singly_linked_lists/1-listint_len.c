#include "lists.h"
/**
* listint_len - a function that returns the number of elements in a linked.
* @h: a pointer for the head of the node.
* Return: always(the number of the elements in node
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
