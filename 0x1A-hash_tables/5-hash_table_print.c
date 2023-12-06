#include "hash_tables.h"

/**
 * hash_table_print - prints entire hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *temp;

	if (ht == NULL) /* nullable hash table */
		return;

	/* loop through every item on the hash table */
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", "); /* print separator */

			temp = ht->array[i];
			while (temp) /* go through each item with collisions */
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp)
					printf(", "); /* print separator */
			}
			flag = 1;
		}
	}
	printf("}\n");
}
