#include "lists.h"
/**
 * insert_dnodeint_at_index - add a new node at idx
 * @h: the head of the targeted list
 * @idx: target index
 * @n: value to add
 * Description: inserts a new node at a given position
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	/* always make sure head pointer is at the start node */
	if (*h != NULL)
		while ((*h)->prev != NULL)
			*h = (*h)->prev;

	if (idx == 0 || *h == NULL) /* insert at the beginning */
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp)
	{
		if (i == idx) /* targeted position */
		{
			/* allocate memory for the new node */
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL); /* failed allocation */

			new_node->n = n;
			new_node->prev = temp->prev;
			new_node->next = temp;
			(temp->prev)->next = new_node;
			temp->prev = new_node;

			return (new_node);
		}
		i++;
		temp = temp->next; /* next node */
	}

	return (NULL); /* given index is out of range */
}
