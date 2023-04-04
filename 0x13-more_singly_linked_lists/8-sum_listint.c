#include "lists.h"

/**
 * sum_listint - Returns sum of all the data (n)of a listint_tlist.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all the data (n) of the linked list,
 * or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
/* Set sum to 0 */
int sum = 0;
/* Traverse through the linked list */
while (head != NULL)
{
/* Sum current node */
sum += head->n;
/* Move to the next node */
head = head->next;
}
/* Return the Sum */
return (sum);
}
