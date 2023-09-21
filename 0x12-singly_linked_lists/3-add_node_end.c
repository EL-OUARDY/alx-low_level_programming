#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int StringLength(const char *str);

/**
 * add_node_end - add a new node at the end of the list
 * @head: the head of the targeted list
 * @str: input string
 * Description: Insert a node at the END of the targeted list
 * Return: the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;

	/* alloacte memory for the new node */
	list_t *link = malloc(sizeof(list_t));

	/* failed allocation */
	if (!link)
		return (NULL);

	/* fill the new node */
	link->len = StringLength(str);
	link->str = strdup(str);
	link->next = NULL;

	/* list is empty case */
	if (*head == NULL)
	{
		*head = link;
		return (link);
	}

	/* traverse to the last node */
	while (current->next)
		current = current->next;

	/* point last element to the newly created node */
	current->next = link;

	return (link);
}

/**
 * StringLength - count the length of a string
 * @str: input string
 *
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

