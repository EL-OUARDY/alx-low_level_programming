#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: the head of the targeted list
 * Description: delete the head node of linked list
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *old_head;

	/* list is empty  */
	if (head == NULL || *head == NULL)
		return (0);

	/*save head */
	old_head = *head;
	n = (*head)->n;

	/* move the head to the next node */
	*head = (*head)->next;

	/* free the old head */
	free(old_head);

	return (n);
}
