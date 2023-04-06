#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to a pointer to the first node of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev_node = *head;
listint_t *current_node;
unsigned int i;

if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(prev_node);
return (1);
}
for (i = 1; i < index; i++)
{
if (prev_node == NULL)
{
return (-1);
}
prev_node = prev_node->next;
}
if (prev_node == NULL || prev_node->next == NULL)
{
return (-1);
}
current_node = prev_node->next;
prev_node->next = current_node->next;
free(current_node);
return (1);
}
