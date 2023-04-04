#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer of the list
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp; /* Declare a temp pointer */

	while (head)
	{
		temp = head; /* store current node in temp */
		head = head->next; /* update header pointer to the next node */
		free(temp); /* free memory alloted for the current node */
	}
}
