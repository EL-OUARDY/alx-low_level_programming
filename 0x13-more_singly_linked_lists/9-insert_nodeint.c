#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node
 * @head: the head of the targeted list
 * @idx: index where to add the new node
 * @n: input integer
 * Description: insert a node at a given index
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current_node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node) /* allocation failed */
		return (NULL);

	/* list is empty  */
	if (head == NULL || *head == NULL)
		return (NULL);

	/* insert at the beginning  */
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* go through the list*/
	for (i = 0; current_node && i < idx; i++)
	{
		if (i == (idx - 1)) /* target index */
		{
			new_node->n = n;
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
	}
	return (NULL);
}
