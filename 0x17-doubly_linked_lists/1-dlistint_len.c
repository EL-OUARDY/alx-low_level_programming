#include "lists.h"

/**
 * dlistint_len - count list elements
 * @h: the head of the targeted list
 * Description: output the count of elements of a dlistint_t list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/* always make sure head pointer is at the start node */
	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
