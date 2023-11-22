#include "lists.h"
/**
 * add_dnodeint - add node
 * @head: the head of the targeted list
 * @n: the node to add
 * Description: adds a new node at the beginning of a dlistint_t list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL); /* failed allocation */

	/* populate the new node */
	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL) /* list empty */
		new_node->next = NULL;
	else
	{
		/* connect the new node with head node */
		new_node->next = *head;
		(*head)->prev = new_node;
	}

	/* set new node as the head node */
	*head = new_node;
	return (*head);
}
