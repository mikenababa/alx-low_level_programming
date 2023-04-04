#include "lists.h"  /* Include the header file that defines listint_t */

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 * Return: address of the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;  /* Declare two pointers to listint_t */

/* Allocate memory for a new node*/
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);  /* If malloc fails, return NULL to indicate failure */

/* Initialize the fields of the new node */
new->n = n;
new->next = NULL;

/* If the list is empty, update the head pointer to point to the new node */
if (*head == NULL)
*head = new;
else
{
/* Traverse the list to find the last node */
last = *head;
while (last->next != NULL)
last = last->next;

/*  Set the next pointer of the last node to the new node */

last->next = new;
}

/*  Return the head pointer */
return (*head);
}
