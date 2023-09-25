#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free list
 * @head: the head of the targeted list
 * Description: free all list nodes from memory
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	/* check the head pointer */
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	*head = NULL;
}
