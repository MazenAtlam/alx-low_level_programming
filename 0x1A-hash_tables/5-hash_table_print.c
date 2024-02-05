#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 *
 * @ht: The hash table
 *
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_item;
	unsigned long int i, j;

	printf("{");
	if (ht != NULL && ht->size != 0 && ht->array != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if
		}
	}
	printf("}");
}
