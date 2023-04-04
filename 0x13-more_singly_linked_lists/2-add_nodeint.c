#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: NULL if it fails
 * or address of element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new; /* declare a new pointer to a listint_t struct */

/* allocate memory for the new node */
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL); /* return NULL if memory allocation fails */

/* set the value of n in the new node */
new->n = n;
new->next = *head;

/* update the head pointer to point to the new node */
*head = new;

/* return a pointer to the new node */
return (new);
}
