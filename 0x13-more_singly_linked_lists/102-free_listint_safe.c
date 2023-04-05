#include "lists.h"
size_t loop_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * loop_listint_count - counts the number of nodes
 * @head: Pointer to the head
 * Return: 0
 */
size_t loop_listint_count(listint_t *head)
{
listint_t *first, *last;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
first = head->next;
last = (head->next)->next;
while (last)
{
if (first == last)
{
first = head;
while (first != last)
{
nodes++;
first = first->next;
last = last->next;
}
first = first->next;
while (first != last)
{
nodes++;
first = first->next;
}
return (nodes);
}
first = first->next;
last = (last->next)->next;
}
return (0);
}
/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: Pointer to the the head
 * Return: 0
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *tmp;
size_t nodes, index;

nodes = loop_listint_count(*h);
if (nodes == 0)
{
for (; h != NULL && *h != NULL; nodes++)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
}
}
else
{
for (index = 0; index < nodes; index++)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
}
*h = NULL;
}
h = NULL;
return (nodes);
}
