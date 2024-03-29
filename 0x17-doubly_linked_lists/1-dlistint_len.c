#include "lists.h"

/**
 * dlistint_len - a function that returns the number of
 * elements in a linked dlistint_t list.
 *
 * @h: The head of the list
 * Return: 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (c);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
