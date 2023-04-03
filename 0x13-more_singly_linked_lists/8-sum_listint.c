#include "lists.h"
/**
 * sum_listint - a function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: Pointer to the address of the head
 * Return: 0
 */
int sum_listint(listint_t *head)
{
int add = 0;
while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
