#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: nothing - everything destroyed -_-
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp_next;
	unsigned long int i;

	/* loop through every item on the hash table */
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp) /* go through each item with collisions */
			{
				tmp_next = tmp->next;
				/* free node */
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = tmp_next;
			}
		}
	}
	/* free hash table */
	free(ht->array);
	free(ht);
}
