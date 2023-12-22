#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - A function that retrieves a value
 * associated with a key
 * @ht: Pointer to a hash table
 * @key: Pointer to a key-value pair
 * Return: A pointer to a character
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index;
	hash_node_t *tmp_store;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	hash_index = key_index((unsigned char *)key, ht->size);
	tmp_store = ht->array[hash_index];

	while (tmp_store != NULL)
	{
		if (strcmp(tmp_store->key, key) == 0)
			return (tmp_store->value);
		tmp_store = tmp_store->next;
	}
	return (NULL);
}
