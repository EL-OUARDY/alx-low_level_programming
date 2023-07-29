#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int StringLength(const char *str);

/**
 * add_node_end - Insert a new node at the end of the list
 * @head: the head of the targeted list
 * @str: input string
 * Description: add a node at the END of the targeted list
 * Return: the newly created node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *link = malloc(sizeof(list_t));

	if (!link)
		return (NULL);

	link->len = StringLength(str);
	link->str = strdup(str);
	link->next = NULL;

	/* list is empty */
	if (*head == NULL)
	{
		*head = link;
		return (link);
	}

	/* point last element to the newly created node */
	/* traverse to the last node */
	while (current->next)
		current = current->next;

	current->next = link;

	return (link);
}

/**
 * StringLength - count the length of a string
 * @str: input string
 *
 * Description: calculate how many characters in a string
 * Return: the length as an integer
 */
int StringLength(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}
