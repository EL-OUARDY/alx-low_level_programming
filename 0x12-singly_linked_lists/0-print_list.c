#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print a singly linked list
 * @h: the head of the targeted list
 * Description: traverse the list nodes and print its data
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* traverse through the linked list */
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}

