#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: address of the first node
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
