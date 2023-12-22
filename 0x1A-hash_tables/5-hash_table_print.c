#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - A function that prints a hash table
 * @ht: Pointer to a hash table
 * Return: (Void)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *tmp_store;
	int flags = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		tmp_store = ht->array[j];
		while (tmp_store != NULL)
		{
			if (flags == 1)
				printf(", ");
			printf("'%s': '%s'", tmp_store->key, tmp_store->value);
			flags = 1;
			tmp_store = tmp_store->next;
		}
	}
	printf("}\n");
}
