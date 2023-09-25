#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of the list
 * @head: the head of the targeted list
 * @n: input integer
 * Description: add a node at the END of the targeted list
 * Return: the newly created node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	/* fill */
	node->n = n;
	node->next = NULL;

	/* list is empty */
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	/* point last element to the newly created node */
	/* traverse to the last node */
	while (current->next)
		current = current->next;

	current->next = node;

	return (node);
}
