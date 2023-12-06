#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void) {
	hash_table_t *ht;

	ht = hash_table_create(1024);

	hash_table_set(ht, "julien", "barbier");
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "leo", "messi");
	hash_table_set(ht, "cristiano", "ronaldo");
	hash_table_set(ht, "donald", "trump");
	hash_table_set(ht, "zack", "zuckerburg");
	hash_table_set(ht, "bill", "gates");
	hash_table_set(ht, "", "ghost");
	hash_table_set(ht, NULL, "nobody");
	hash_table_set(NULL, "lost", "where am I?");


	hash_table_set(ht, "C", "is fun");

	hash_table_set(ht, "mentioner", "Hello");
	hash_table_set(ht, "hetairas", "World");
	hash_table_set(ht, "mentioner", "X");
	return (EXIT_SUCCESS);
}
