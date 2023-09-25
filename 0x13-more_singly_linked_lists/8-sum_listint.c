#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of list nodes
 * @h: the head of the targeted list
 * Description: calculate the sum of all node data
 * Return: output the sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	/* list is empty */
	if (!head)
		return (0);

	/* loop over list */
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
