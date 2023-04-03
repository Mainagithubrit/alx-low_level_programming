#include "lists.h"
/**
 * pop_listint - Write a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head: Pointer to te address of the head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int x;
if (*head == NULL)
return (0);
tmp = *head;
x = (*head)->n;
*head = (*head)->next;
free(tmp);
return (x);
}
