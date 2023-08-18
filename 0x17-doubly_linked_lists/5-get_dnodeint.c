#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list.
 *
 * @head: The head of the list
 * @index: The index of the node, starting from 0
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s = 0;
	dlistint_t *tp;

	if (head == NULL)
		return (NULL);

	tp = head;
	while (tp)
	{
		if (index == s)
			return (tp);
		s++;
		tp = tp->next;
	}
	return (NULL);
}
