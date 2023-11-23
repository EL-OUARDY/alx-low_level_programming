#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the targeted list
 * Description: frees the memory located by the dlistint_t list
 * Return: nothing, silence
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* always make sure head pointer is at the start node */
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
