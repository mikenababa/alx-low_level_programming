#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
/* Set node count to 0 */
size_t count = 0;
/* traverse the list */
const listint_t *tmp, *prev;
/* if the list is empty */
if (head == NULL)
/* exit with error code */
exit(98);
/* set temp to head */
tmp = head;
/* set prev to NULL */
prev = NULL;
while (tmp != NULL)
{
/* print adress and value of node */
printf("[%p] %d\n", (void *)tmp, tmp->n);
count++;
/* go to the next node */
tmp = tmp->next;
/* if list has circle */
if (tmp < prev)
/* break the loop */
break;
/* set prev to tmp node */
prev = tmp;
}
return (count);
}
