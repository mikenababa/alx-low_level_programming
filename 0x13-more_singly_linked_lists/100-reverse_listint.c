#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: pointer to the address of
 *        the head of the list_t list.
 *
 * Return: pointer to the first node of the reversed list.
 */

/* A function to reverse a singly linked list */
listint_t *reverse_listint(listint_t **head)
{
/* Initialize three pointers, prev_node, current_node, and next_node */
listint_t *prev_node = NULL;
listint_t *current_node = *head;
listint_t *next_node;
/* Loop through the list */
while (current_node != NULL)
{
/* Store the next node */
next_node = current_node->next;
/*  Reverse the link of the current node to point to the previous node */
current_node->next = prev_node;
prev_node = current_node;
current_node = next_node;
}
/* Update the head pointer to the new head of the reversed list */
*head = prev_node;
/* Return to the new head of the reversed list */
return (prev_node);
}
