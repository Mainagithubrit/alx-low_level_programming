#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: Pointer to the addresss of the head
 * @index: Th index of the node to locate
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;
for (node = 0; node < index; node++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
