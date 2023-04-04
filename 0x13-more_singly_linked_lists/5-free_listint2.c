#include "lists.h"

/**
*free_listint2 - frees a listint_ list
*@head: pointer to the head of the list
*Return: the head to NULL.
*/

void free_listint2(listint_t **head)
{
listint_t *tmp; /* Declare a Temp pointer to the head */

if (head == NULL)
return;
{
/* Traverse the list and free each node */
while (*head != NULL)
{
tmp = (*head)->next;
free(*head); /* free the node */
*head = tmp; /* Move head to the next node */
}

head  = NULL; /* set the head to NULL */

}
}
