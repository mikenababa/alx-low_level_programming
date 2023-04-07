#include "lists.h"

/**
 * find_listint_loop - Find the start of a loop in a linked list
 * @head: a pointer to the head of the linked list
 * Return: If there is no loop - NULL.
 *         else the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
/* Initialize two pointers: slow and fast */
listint_t *s, *f;
/* If the head is NULL,return NULL */
if (head == NULL || head->next == NULL)
return (NULL);
/* s point to the second node and f point to the third node */
s = head->next;
f = head->next->next;
/* While there's a node after f and there are two nodes after f */
while (f && f->next)
{
/* If s and f meet, there is a loop */
if (s == f)
{
/* set s to the head */
s = head;
while (s != f)
{
s = s->next;
f = f->next;
}
/* Return the node */
return (s);
}
/* Move s one node at a time and f two nodes at a time */
s = s->next;
f = f->next->next;
}
/* return NULL if no loop */
return (NULL);
}
