#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index -  a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: the address of the first node
 * @index: node to be deleted
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (-1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	temp = copy->next;
	copy->next = temp->next;
	free(temp);

	return (1);
}
