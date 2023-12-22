#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - A function that creates a hash table
 * @size: Size of the array
 * Return: Pointer to new created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int j;

	if (size < 1)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	for (j = 0; j < size; j++)
	{
		ht->array[j] = NULL;
	}
	return (ht);
}
