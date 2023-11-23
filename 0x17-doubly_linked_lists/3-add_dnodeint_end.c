#include "lists.h"

/**
 * add_dnodeint_end - add node to the end
 * @head: the head of the targeted list
 * @n: the node to add
 * Description: adds a new node at the end of a dlistint_t list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL); /* failed allocation */

	/* populate the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* always make sure head pointer is at the start node */
	if (*head != NULL)
		while ((*head)->prev != NULL)
			*head = (*head)->prev;

	if (*head == NULL) /* list empty */
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		last = *head;
		/* get the last node */
		while (last->next)
			last = last->next;

		/* connect the new node with head node */
		last->next = new_node;
		new_node->prev = last;
	}

	return (*head);
}
