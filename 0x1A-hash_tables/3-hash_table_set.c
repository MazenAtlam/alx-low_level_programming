#include "hash_tables.h"

/**
 * create_item - A function that create a new hash table item
 *
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: A pointer to the new item (success), NULL (failure)
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *new_item;

	new_item = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!new_item)
		return (NULL);

	new_item->key = (char *) malloc(sizeof(char) * (strlen(key)));
	if (!new_item->key)
		return (NULL);

	new_item->value = (char *) malloc(sizeof(char) * (strlen(value)));
	if (!new_item->value)
		return (NULL);

	strcpy(new_item->key, key);
	strcpy(new_item->value, value);
	new_item->next = NULL;

	return (new_item);
}

/**
 * free_item - A function that deallocates a hash table item from the memory
 *
 * @item: The item to be deallocated
 *
 * Return: Nothing
 */
void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

/**
 * hash_table_set - A function that adds an element to the hash table
 *
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key
 * Key can not be an empty string
 * @value: The value associated with the key
 * Value must be duplicated. Value can be an empty string
 *
 * Return: 1 (success), 0 (failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item, *current_item;
	unsigned long int index;

	if (!ht || !ht->array || ht->size == 0 || !key || key[0] == '\0')
		return (0);

	if (!value)
		value = "";

	new_item = create_item(key, value);
	if (!new_item)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	current_item = ht->array[index];
	if (!current_item)
		current_item = new_item;
	else if (strcmp(current_item->key, key) == 0)
	{
		strcpy(current_item->value, value);
		free_item(new_item);
	}
	else
	{
		new_item->next = current_item;
		current_item = new_item;
	}

	return (1);
}
