#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: the key
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size); /* get index */

	/* not found or index out of range */
	if (ht->array[index] == NULL || index >= ht->size)
		return (NULL);
	/* item found */
	temp = ht->array[index];
	while (temp) /* go through each node */
	{
		if (strcmp(temp->key, key) == 0) /* match */
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
