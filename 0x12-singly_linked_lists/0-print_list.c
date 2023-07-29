#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print a singly linked list
 * @h: the head of the targeted list
 * Description: go through all list nodes and print its data
 * Return: output the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t nb_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nb_count++;
	}
	return (nb_count);
}
