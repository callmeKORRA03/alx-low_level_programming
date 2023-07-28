#include "lists.h"
/**
 * list_len - function to find the number of
 *            elements in a linked list.
 * @h: The linked list.
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t n_elements = 0;

	while (h)
	{
		h = h->next;
		n_elements++;
	}
	return (n_elements);
}
