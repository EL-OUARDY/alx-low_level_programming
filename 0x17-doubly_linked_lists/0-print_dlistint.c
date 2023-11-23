#include "lists.h"

/**
 * print_dlistint - prints all elements
 * @h: the head of the targeted list
 * Description: prints all the elements of a dlistint_t list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	/* always make sure head pointer is at the start node */
	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
