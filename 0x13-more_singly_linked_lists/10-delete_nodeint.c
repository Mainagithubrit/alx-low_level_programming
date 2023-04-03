#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: Ponter to yhe address of the head
 * @index: The index of the node that should be deleted
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *x = *head;
unsigned int node;
if (x == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(x);
return (1);
}
for (node = 0; node < (index - 1); node++)
{
if (x->next == NULL)
return (-1);
x = x->next;
}
tmp = x->next;
x->next = tmp->next;
free(tmp);
return (1);
}
