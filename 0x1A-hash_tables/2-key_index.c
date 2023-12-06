#include "hash_tables.h"

/**
 * key_index - return the index of a given key
 * @key: the key
 * @size: size of the hash table array
 * Return: the index at which the key/value pair should be stored in the HT
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	/* use the hash_djb2 function to get the right index */
	index = hash_djb2(key) % size;
	return (index);
}
