#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a listint_t list
 * @head: A pointer to the address of the head
 * @n: The integer for the nw node
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *a;
a = malloc(sizeof(listint_t));
if (a == NULL)
return (NULL);
a->n = n;
a->next = *head;
*head = a;
return (a);
}
