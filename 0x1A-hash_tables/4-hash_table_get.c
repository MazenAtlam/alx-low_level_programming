#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key
 *
 * @ht : The hash table you want to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the element, or NULL (if key is not found)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_item;
	unsigned long int index;

	if (!ht || ht->size == 0 || !ht->array || !key || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	if (!ht->array[index])
		return (NULL);

	current_item = ht->array[index];
	while (current_item)
	{
		if (strcmp(current_item->key, key) == 0)
			return (current_item->value);

		current_item = current_item->next;
	}

	return (NULL);
}
