#include "lists.h"
#include <stdio.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: address to the first node
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
