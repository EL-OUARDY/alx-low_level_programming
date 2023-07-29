#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int StringLength(const char *str);

/**
 * add_node - Insert a new node
 * @head: the head of the targeted list
 * @str: input string
 * Description: add a node at the beginning of the targeted list
 * Return: the newly created node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *link = malloc(sizeof(list_t));

	if (!link)
		return (NULL);

	link->len = StringLength(str);
	link->str = strdup(str);
	link->next = *head;
	*head = link;

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
