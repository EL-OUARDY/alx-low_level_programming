#include "lists.h"

/**
 * sum_dlistint - sum list data
 * @head: the head of the targeted list
 * Description: calculate the sum of all list data
 * Return: integer, sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
