#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to be returned, starting at 0.
 *
 * Return: Pointer to the nth node of the linked list,
 * or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
/* Set current pointer to the head of the linked list, and an integer i to 0 */
listint_t *current = head;
unsigned int i = 0;
/* Traverse through the linked list */
while (current != NULL && i < index)
{
/* Move to the next node */
current = current->next;
/* Increment 1 */
i++;
}
/* If we have reached the index-th node, return a pointer to that node */
/* Otherwise, return NULL */
return (i == index ? current : NULL);
}
