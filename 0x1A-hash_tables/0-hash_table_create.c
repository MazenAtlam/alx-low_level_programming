#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 *
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table (success), NULL (failure)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hash_table_t *new_ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);

	new_ht->size = size;
	new_ht->array = (hash_node_t **) calloc(new_ht->size, sizeof(hash_node_t *))
	if (!new_ht->array)
		return (NULL);

	for (i = 0; i < new_ht->size; i++)
		new_ht->array[i] = NULL;

	return (new_ht);
}
