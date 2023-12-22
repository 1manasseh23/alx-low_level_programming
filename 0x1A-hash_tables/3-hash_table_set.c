#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - A functio that adds an element to the hash table
 * @ht: Pointer to the hash table structure
 * @key: String pointer representing the key
 * @value: Pointer to a string representing the value associated
 * with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_hash;
	hash_node_t *my_node, *tmp_store;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index_hash = key_index((unsigned char *)key, ht->size);
	tmp_store = ht->array[index_hash];

	while (tmp_store != NULL)
	{
		if (strcmp(tmp_store->key, key) == 0)
		{
			free(tmp_store->value);
			tmp_store->value = strdup(value);
			return (1);
		}
		tmp_store = tmp_store->next;
	}
	my_node = malloc(sizeof(hash_node_t));
	if (my_node == NULL)
		return (0);

	my_node->key = strdup(key);
	my_node->value = strdup(value);
	my_node->next = ht->array[index_hash];
	ht->array[index_hash] = my_node;

	return (1);
}
