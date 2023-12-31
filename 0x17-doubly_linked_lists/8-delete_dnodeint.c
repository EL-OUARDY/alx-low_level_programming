#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: the head of the targeted list
 * @index: target node's index
 * Description: delete node at given index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (*head != NULL) /* make sure head pointer is at the start node */
		while ((*head)->prev != NULL)
			*head = (*head)->prev;

	temp = *head;
	while (temp)
	{
		if (i == index) /* target node at index */
		{
			if (index == 0) /* first node case */
			{
				if ((*head)->next) /* check if there is a next node */
				{
					*head = (*head)->next;
					(*head)->prev = NULL;
				}
				else /* list contains only one node */
					*head = NULL;
				free(temp); /* deallocate memory */
				return (1);
			}
			if (temp->next == NULL) /* last node case */
			{
				(temp->prev)->next = NULL;
				free(temp);
				return (1);
			}

			(temp->prev)->next = temp->next;
			(temp->next)->prev = temp->prev;
			free(temp); /* deallocate memory */
			return (1);
		}
		i++;
		temp = temp->next; /* to the next node */
	}
	return (-1);
}
