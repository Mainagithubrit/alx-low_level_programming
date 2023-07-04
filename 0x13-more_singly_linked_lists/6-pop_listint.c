#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: address of the first node
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int del;

	if (*head == NULL)
		return (0);

	temp = *head;
	del = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (del);
}
