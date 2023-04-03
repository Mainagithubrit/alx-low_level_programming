#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the
 * end of a listint_t list
 * @head: Pointer to the address oh the head
 * @n: The integer for the new node to contain
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *a, *end;
a = malloc(sizeof(listint_t));
if (a == NULL)
return (NULL);
a->n = n;
a->next = NULL;
if (*head == NULL)
*head = a;
else
{
end = *head;
while (end->next != NULL)
end = end->next;
end->next = a;
}
return (*head);
}
