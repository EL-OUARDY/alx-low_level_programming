#include "lists.h"
/**
 * get_dnodeint_at_index - get node at given index
 * @head: the head of the targeted list
 * @index: target node's index
 * Description: the nth node of a dlistint_t linked list
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next; /* next node */
	}

	return (NULL);
}
