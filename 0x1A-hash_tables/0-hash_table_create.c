#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table array
 * Return: a pointer to the created HT
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/* allocate memory for the hash table */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL) /* hash table allocation failed */
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL) /* HT array allocation failed */
		return (NULL);

	/* initialize the hash table array */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
