#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - insert a new node
 * @head: the head of the targeted list
 * @n: input integer
 * Description: add a node at the beginning of the targeted list
 * Return: the newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	/* fill */
	node->n = n;
	node->next = *head;

	/* new node become the head */
	*head = node;

	return (node);
}
