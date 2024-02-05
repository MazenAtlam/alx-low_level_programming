#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table
 *
 * @ht: The hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_item, *temp;
	unsigned long int i;

	if (ht)
	{
		if (ht->array)
		{
			for (i = 0; i < ht->size; i++)
			{
				current_item = ht->array[i];
				while (current_item)
				{
					temp = current_item;
					current_item = current_item->next;
					free_item(temp);
				}
			}
			free(ht->array);
		}
		free(ht);
	}
}
