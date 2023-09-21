#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - calculate length of a linked list
 * @h: the head of the targeted list
 * Description: output the number of nodes of linked list
 * Return: output the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nb_nodes = 0;

	/* loop over list elements */
	while (h != NULL)
	{
		nb_nodes++;
		h = h->next;
	}
	return (nb_nodes);
}

