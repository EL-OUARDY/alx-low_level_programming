#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list
 * @head: the head of the targeted list
 * Description: free reserved memory of all list nodes from memory
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next_node;

	/* traverse through the list */
	while (current_node != NULL)
	{
		/* save next nodes before freeing memory */
		next_node = current_node->next;

		/* free memory of string property & the entire node */
		free(current_node->str);
		free(current_node);

		current_node = next_node;
	}
}

