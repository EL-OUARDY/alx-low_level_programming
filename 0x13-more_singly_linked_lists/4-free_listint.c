#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free list
 * @head: the head of the targeted list
 * Description: free all list nodes from memory
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
