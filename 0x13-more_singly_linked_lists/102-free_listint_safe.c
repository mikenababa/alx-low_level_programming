#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list.
* @h: A pointer to the head of the listint_t list.
*
* Return: The size of the list that was freed.
*/

/* declares the function free_listint_safe */
size_t free_listint_safe(listint_t **h)
{
/* declares a variable called size and initializes. */ 
size_t size = 0;
/* declares two pointers current and next used to traverse the linked list. */
listint_t *current, *next;
if (h == NULL || *h == NULL)
return (size);
current = *h;
*h = NULL;
while (current != NULL)
{
size++;
next = current->next;
free(current);
if (next >= current)
break;
current = next;
}
return (size);
}
