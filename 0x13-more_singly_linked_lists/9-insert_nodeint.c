#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node with a given value
 * position in a listint_t linked list.
 * @head: Double pointer to the head of the linked list.
 * @idx: Index of the list where the new node should be added, starting at 0.
 * @n: Value of the new node to be inserted.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0; /* Initialize a counter to 0 */
listint_t *new_node, *temp;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));

if (new_node == NULL) /* If memory allocation fails, return NULL */
return (NULL);

new_node->n = n; /* Set the data of the new node to n */
temp = *head; /* Set the temporary node to the head of the linked list */

if (idx == 0)
{
new_node->next = *head;
*head = new_node; /* Set the head pointer to the new node */
return (new_node);
}

while (i < idx - 1)
{
if (temp == NULL)
{
free(new_node); /* Free the memory for the new node */
return (NULL);
}
temp = temp->next; /* Move to the next node */
i++; /* Increment i */
}

new_node->next = temp->next; /* Set the next pointer to the next node */
temp->next = new_node; /* Set the next pointer to the new node */

return (new_node);
}
