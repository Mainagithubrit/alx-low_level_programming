#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: Pointer to the address of the head
 * @idx:the index of the list where the new node should be added.
 * @n: The integer for the node to contain
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *a, *x = *head;
unsigned int node;
a = malloc(sizeof(listint_t));
if (a == NULL)
return (NULL);
a->n = n;
if (idx == 0)
{
a->next = x;
*head = a;
return (a);
}
for (node = 0; node < (idx - 1); node++)
{
if (x == NULL || x->next == NULL)
return (NULL);
x = x->next;
}
a->next = x->next;
x->next = a;

return (a);
}
