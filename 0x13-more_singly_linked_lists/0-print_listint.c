#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print singly linked list's elements
 * @h: the head of the targeted list
 * Description: go through all list nodes and print its data
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/* go through each element */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
