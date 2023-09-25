#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - search for a node
 * @head: the head of the targeted list
 * @index: the index of the targeted node
 * Description: output the node with corresponding index
 * Return: listint_t target node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	/* loop over list nodes */
	for (i = 0; head != NULL; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (NULL);
}
