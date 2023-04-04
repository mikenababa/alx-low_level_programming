#include "lists.h"

/**
*free_listint2 - frees a linked list
*@head: pointer to the head of the list
*
*Return: void
**/

void free_listint2(listint_t **head)
{
listint_t *cursor; /* Declare a pointer to traverse the list */
listint_t **temp = head; /* Declare a Temp pointer to the head */

if (temp != NULL)
{
/* Traverse the list and free each node */
while (*head != NULL)
{
cursor = *head;
free(cursor); /* free the node */
*head = (*head)->next; /* Move head to the next node */
}

*temp = NULL; /* ste the head to NULL */

}
}
