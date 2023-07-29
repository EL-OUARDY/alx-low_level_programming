#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Length of a linked list
 * @h: the head of the targeted list
 * Description: Calculate the length of linked list
 * Return: output the number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t nb_nodes = 0;

	while (h != NULL)
	{
		nb_nodes++;
		h = h->next;
	}
	return (nb_nodes);
}
