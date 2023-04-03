#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	/* Initialize nodes variable to 0 */
	nodes = 0;

	/* Loop over each node in the list */
	while (h)
	{
		/* Increment nodes variable by 1 for each node */
		nodes++;

		/* Move to the next node by following the next pointer */
		h = h->next;
	}

	/* Return the final value of nodes */
	return (nodes);
}
