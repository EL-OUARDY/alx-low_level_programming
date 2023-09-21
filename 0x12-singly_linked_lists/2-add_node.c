#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int StringLength(const char *str);

/**
 * add_node - add a new node
 * @head: the head of the targeted list
 * @str: input string
 * Description: insert a node at the beginning of the targeted list
 * Return: the newly created node
 */
list_t *add_node(list_t **head, const char *str)
{
	/* allocate memory for the new node */
	list_t *link = malloc(sizeof(list_t));

	/* failed to allocate memory */
	if (!link)
		return (NULL);

	/* populate the new node */
	link->len = StringLength(str);
	link->str = strdup(str);
	link->next = *head;

	/* the new node become the head of the list */
	*head = link;

	return (link);
}

/**
 * StringLength - count the length of a string
 * @str: input string
 *
 * Return: integer - the length as an integer
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

