#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Length of a linked list
 * @h: the head of the targeted list
 * Description: get the length of linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	/* go through nodes */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
