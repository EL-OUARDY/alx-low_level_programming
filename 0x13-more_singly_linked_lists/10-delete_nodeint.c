#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: the head of the targeted list
 * @index: input index
 * Description: delete node at index
 * Return: successed (1) failed (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node = *head;
	listint_t *prev_node;

	/* pointer not valid or empty list*/
	if (!head || !*head)
		return (-1);

	/* target exist at index 0 */
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	/* go through the list*/
	for (i = 0; current_node; i++)
	{
		if (i == index) /* target index */
		{
			prev_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		prev_node = current_node;
		current_node = current_node->next;
	}
	return (-1);
}
