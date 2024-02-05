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
	unsigned long int i;
	bool first_print = true;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_item = ht->array[i];
		while (current_item)
		{
			if (!first_print)
				printf(", ");
			printf("\'%s\': \'%s\'", current_item->key, current_item->value);
			first_print = false;
			current_item = current_item->next;
		}
	}
	printf("}\n");
}
