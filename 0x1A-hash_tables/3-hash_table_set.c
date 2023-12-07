#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: hash table
 * @key: the key
 * @value: the value
 * Return: integer, 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
		return (0);
	/* create hash_node_t node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	index = key_index((unsigned char *)key, ht->size); /* get index */
	if (ht->array[index] == NULL) /* empty space */
	{ /* add the new node */
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	else /* collision */
	{
		temp = ht->array[index]; /* check if a node already has the same key */
		while (temp) /* loop over each node */
		{
			if (strcmp(temp->key, key) == 0) /* match */
			{
				free(temp->value); /* free old value */
				temp->value = strdup(value); /* update the value of the existed node */
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			temp = temp->next;
		}
		/* add the new node at the beginning of the list */
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
