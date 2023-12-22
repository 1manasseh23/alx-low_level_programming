#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete - A function that deletes a hash table
 * @ht: Takes the pointer to a hash table
 * Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *my_node, *tmp_store;

	if (ht == NULL)
		return;
	for (j = 0; j < ht->size; j++)
	{
		my_node = ht->array[j];
		while (my_node != NULL)
		{
			tmp_store = my_node;
			my_node = my_node->next;
			free(tmp_store->key);
			free(tmp_store->value);
			free(tmp_store);
		}
	}
	free(ht->array);
	free(ht);
}
