#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: the head of the targeted list
 * Description: reverse the order of a given list
 * Return: the head node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	/* pointer not valid or empty list*/
	if (!head || !*head)
		return (NULL);

	/* list contains only one node */
	if (!(*head)->next)
		return (*head);

	/* go through the list*/
	while (*head)
	{
		next = (*head)->next;   /* store the next node */
		(*head)->next = prev;  /* reverse the link */

		/* move pointers one step ahead */
		prev = (*head);
		(*head) = next;
	}

	/* return the head of the list*/
	*head = prev;
	return (*head);
}
